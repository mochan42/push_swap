/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_n_elements_radix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:07:13 by moninechan        #+#    #+#             */
/*   Updated: 2022/07/05 15:28:02 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*create_index(int *array, int size, t_node *head_1)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	while (++i < size)
	{
		array[i] = head_1->value;
		head_1 = head_1->next;
	}
	i = -1;
	while (++i < size - 1)
	{
		j = i;
		while (++j < size)
		{
			if (array[i] > array[j])
			{
				k = array[i];
				array[i] = array[j];
				array[j] = k;
			}
		}
	}
	return (array);
}

void	fill_index(t_node *head_1, int *array)
{
	int	i;

	while (head_1)
	{
		i = 0;
		while (array[i] != head_1->value)
			i++;
		head_1->index = i;
		head_1 = head_1->next;
	}
}

static int	get_max_bits(t_node **head_1)
{
	t_node	*tmp;
	int		max;
	int		max_bits;

	tmp = *head_1;
	max = tmp->index;
	max_bits = 0;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort_method_1(t_node **head_1, t_node **head_2, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < get_max_bits(head_1))
	{
		j = 0;
		while (j++ < n)
		{
			if ((((*head_1)->index >> i) & 1) == 1)
				move_rotate_c(head_1, 'a');
			else
				move_push_c(head_2, head_1, 'b');
		}
		while (ft_plstsize(*head_2) != 0)
			move_push_c(head_1, head_2, 'a');
		i++;
	}
}

void	radix_sort(t_node **head_1, t_node **head_2)
{
	int	size;
	int	*array;

	size = ft_plstsize(*head_1);
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
		return ;
	array = create_index(array, size, *head_1);
	fill_index(*head_1, array);
	radix_sort_method_1(head_1, head_2, size);
	free(array);
}
