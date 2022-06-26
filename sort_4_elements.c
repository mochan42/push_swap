/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_elements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:38:31 by mochan            #+#    #+#             */
/*   Updated: 2022/06/27 00:10:14 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_4(t_node **head_1, t_node **head_2)
{
	// t_node	*min_node;
	// t_node	*current;
	// int		min;

	// min_node = find_min_node(head_1);
	// min = find_min_value(head_1);
	// current = head_1;
	// if (current->value == min)
	// {
	move_push_c(head_2, head_1, 'b');
	sort_3(head_1);
	move_push_c(head_1, head_2, 'a');
	// }
	// while (current != NULL)
	// {
	// 	if (current->value != min)
	// 		move_rotate_c(&head_1, 'a');
	// 	current = current->next;
	// }
	
}
