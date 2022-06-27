/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_elements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:50:33 by mochan            #+#    #+#             */
/*   Updated: 2022/06/27 12:14:09 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5_method_1(t_node **head_1, t_node **head_2)
{
	move_push_c(head_2, head_1, 'b');
	sort_4(head_1, head_2);
	move_push_c(head_1, head_2, 'a');
}

void	sort_5(t_node **head_1, t_node **head_2)
{
	t_node	*current;
	int		min;
	int i;
	int k;
	
	current = *head_1;
	min = find_min_value(*head_1);
	i = 0;
	k = 0;
	while (current != NULL && current->value != min)
	{
		i++;
		current = current->next;
	}
	while (current != NULL && k++ < i )
		move_rotate_c(head_1, 'a');
	sort_5_method_1(head_1, head_2);
}