/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_elements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:38:31 by mochan            #+#    #+#             */
/*   Updated: 2022/07/16 11:06:58 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* sort_4_method_1:
*	Once the minimum number is on top of stack a, push it to stack b.
*	Sort stack a as a list of 3 numbers.
*	Push the minimum number back to stack a.
*/
void	sort_4_method_1(t_node **head_1, t_node **head_2)
{
	move_push_c(head_2, head_1, 'b');
	sort_3(head_1);
	move_push_c(head_1, head_2, 'a');
}

/* sort_4:
*	Sorting method for 4 numbers.
*	Find the node with the minimum number, put it in the top of stack a.
*	Then apply the helper function sort_4_method_1.
*/
void	sort_4(t_node **head_1, t_node **head_2)
{
	t_node	*current;
	int		min;
	int		i;
	int		k;

	current = *head_1;
	min = find_min_value(*head_1);
	i = 0;
	k = 0;
	while (current != NULL && current->value != min)
	{
		i++;
		current = current->next;
	}
	if (i == 3)
		move_reverse_rotate_c(head_1, 'a');
	else if (i != 3)
	{
		while (current != NULL && k++ < i)
			move_rotate_c(head_1, 'a');
	}
	sort_4_method_1(head_1, head_2);
}
