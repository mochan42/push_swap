/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_n_elements_radix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:07:13 by moninechan        #+#    #+#             */
/*   Updated: 2022/07/17 10:48:41 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* create_index:
*	Retrieve all the number values of the nodes of stack A into an array.
*	Use a bubble sort to sort the array by ascending order.
*/
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

/* fill_index:
*	For each node of the linked list of stack A, the number value is compared
*	to the value in each element of the array.
*	The counter to find the corresponding element in the array is the index,
*	which is then sent back to the node.
*/
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

/* get_max_bits:
*	Returns the maximum number of bits in the list of indexes
*	after being converted into binary base.
*/
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

/* radix_sort_method_1:
*	For every bit starting from the least significant one (bit = 0,
*	on the right end).
*	For every index in the list of numbers in stack a
*	Each index is converted to binary and the bit is compared to 1
*	Every index whose current bit is 0 is pushed to stack b
*	Every index whose current bit is 1 is kept in stack a
*	Push back all indexed in stack b back to stack a.
*	Now, in stack a, all the indexes with bit = 0 are on top of
*	indexes for with bit =1.
*	Repeat the process for all the bits, from right (least significant)
*	to the left (most significant).
*/
void	radix_sort_method_1(t_node **head_1, t_node **head_2, int n)
{
	int	bit;
	int	index;

	bit = 0;
	while (bit < get_max_bits(head_1))
	{
		index = 0;
		while (index++ < n)
		{
			if ((((*head_1)->index >> bit) & 1) == 1)
				move_rotate_c(head_1, 'a');
			else
				move_push_c(head_2, head_1, 'b');
		}
		while (ft_plstsize(*head_2) != 0)
			move_push_c(head_1, head_2, 'a');
		bit++;
	}
}

/* radix_sort:
*	An index is attributed to each node of the linked list.
*	Radix algorithm will sort the index values rather than the
*	actual numbers' value.
*	Malloc an array and create the index for each node.
*	Copy the index from the array into the index value of each node.
*	Helper function radix_sort_method_1 will perform the moves to sort
*	the array.
*	Free the array that was mallocc'ed to avoid memory leaks.
*/
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
