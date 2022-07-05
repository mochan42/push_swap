/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_n_elements_radix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:07:13 by moninechan        #+#    #+#             */
/*   Updated: 2022/07/05 14:10:02 by moninechan       ###   ########.fr       */
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

int	radix_sort(t_node **head_1)
{
	int	size;
	int	*array;

	size = ft_plstsize(*head_1);
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
		return (0);
	array = create_index(array, size, *head_1);
	fill_index(*head_1, array);
	printlist_index(*head_1);
	return (0);
}
