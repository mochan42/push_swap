/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_elements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:50:33 by mochan            #+#    #+#             */
/*   Updated: 2022/06/27 15:37:08 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5_method_1(t_node **head_1, t_node **head_2)
{
	move_push_c(head_2, head_1, 'b');
	sort_4(head_1, head_2);
	move_push_c(head_1, head_2, 'a');
}

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

// void	sort_5(t_node **head_1, t_node **head_2)
// {
// 	t_node	*current;
// 	int		min;
// 	int		i;
// 	int		k;

// 	current = *head_1;
// 	min = find_min_value(*head_1);
// 	i = 0;
// 	k = 0;
// 	while (current != NULL && current->value != min)
// 	{
// 		i++;
// 		current = current->next;
// 	}
// 	if (i == 4)
// 		move_reverse_rotate_c(head_1, 'a');
// 	else if (i == 3)
// 	{
// 		move_reverse_rotate_c(head_1, 'a');
// 		move_reverse_rotate_c(head_1, 'a');
// 	}
// 	else if (i != 4 && i !=3)
// 	{
// 		while (current != NULL && k++ < i)
// 			move_rotate_c(head_1, 'a');
// 	}
// 	sort_5_method_1(head_1, head_2);
// }
