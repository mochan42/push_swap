/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_moves_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:51:36 by mochan            #+#    #+#             */
/*   Updated: 2022/06/23 17:21:39 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_sa(t_node **head)
{
	t_node	*p;
	t_node	*next;

	p = *head;
	if (*head && (*head)->next)
	{
		next = (*head)->next;
		(*head)->next = next->next;
		next->next = p;
		(*head) = next;
	}
}

void	move_ra(t_node **head)
{
	t_node	*tmp;

	if (*head && (*head)->next)
	{
		tmp = *head;
		*head = (*head)->next;
		tmp->next = NULL;
		node_add_back(head, tmp);
	}
}

void	move_rra(t_node **head)
{
	t_node	*before_last;

	if (*head && (*head)->next)
	{
		before_last = before_last_node(*head);
		node_add_front(head, before_last->next);
		before_last->next = NULL;
	}
}
