/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_elements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:50:33 by mochan            #+#    #+#             */
/*   Updated: 2022/07/16 11:06:51 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* sort_5_method_1:
*	Once the minimum number is on top of stack a, push it to stack b.
*	Sort stack a as a list of 4 numbers.
*	Push the minimum number back to stack a.
*/
void	sort_5_method_1(t_node **head_1, t_node **head_2)
{
	move_push_c(head_2, head_1, 'b');
	sort_4(head_1, head_2);
	move_push_c(head_1, head_2, 'a');
}

/* sort_5_decision:
*	The minimum number position in stack a is stored with int n.
*	Depending on n, we decide to rotate or reverse rotate stack to move
*	the minimum number on top of stack a based on the lowest number of moves
*	required.
*	Then we apply helper function sort_5_method_1.
*/
void	sort_5_decision(t_node **head_1, t_node **head_2, int n)
{
	t_node	*current;
	int		k;

	current = *head_1;
	k = 0;
	if (n == 4)
		move_reverse_rotate_c(head_1, 'a');
	else if (n == 3)
	{
		move_reverse_rotate_c(head_1, 'a');
		move_reverse_rotate_c(head_1, 'a');
	}
	else if (n != 4 && n != 3)
	{
		while (current != NULL && k++ < n)
			move_rotate_c(head_1, 'a');
	}
	sort_5_method_1(head_1, head_2);
}

/* sort_5:
*	Sorting method for 5 numbers.
*	Find the node with the minimum number and feeds its position
*	into the helper function sort_5_decision.
*/
void	sort_5(t_node **head_1, t_node **head_2)
{
	t_node	*current;
	int		min;
	int		i;

	current = *head_1;
	min = find_min_value(*head_1);
	i = 0;
	while (current != NULL && current->value != min)
	{
		i++;
		current = current->next;
	}
	sort_5_decision(head_1, head_2, i);
}
