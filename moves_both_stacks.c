/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_both_stacks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:51:36 by mochan            #+#    #+#             */
/*   Updated: 2022/06/26 19:41:57 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_ss(t_node **head_1, t_node **head_2)
{
	t_node	*p_1;
	t_node	*next_1;
	t_node	*p_2;
	t_node	*next_2;

	p_1 = *head_1;
	p_2 = *head_2;
	if (*head_1 && (*head_1)->next && *head_2 && (*head_2)->next)
	{
		next_1 = (*head_1)->next;
		(*head_1)->next = next_1->next;
		next_1->next = p_1;
		(*head_1) = next_1;
		next_2 = (*head_2)->next;
		(*head_2)->next = next_2->next;
		next_2->next = p_2;
		(*head_2) = next_2;
		ft_putstr_fd("ss\n", 1);
	}
}

void	move_rr(t_node **head_1, t_node **head_2)
{
	t_node	*tmp_1;
	t_node	*tmp_2;

	if (*head_1 && (*head_1)->next && *head_2 && (*head_2)->next)
	{
		tmp_1 = *head_1;
		*head_1 = (*head_1)->next;
		tmp_1->next = NULL;
		node_add_back(head_1, tmp_1);
		tmp_2 = *head_2;
		*head_2 = (*head_2)->next;
		tmp_2->next = NULL;
		node_add_back(head_2, tmp_2);
		ft_putstr_fd("rr\n", 1);
	}
}

void	move_rrr(t_node **head_1, t_node **head_2)
{
	t_node	*before_last_1;
	t_node	*before_last_2;

	if (*head_1 && (*head_1)->next && *head_2 && (*head_2)->next)
	{
		before_last_1 = before_last_node(*head_1);
		node_add_front(head_1, before_last_1->next);
		before_last_1->next = NULL;
		before_last_2 = before_last_node(*head_2);
		node_add_front(head_2, before_last_2->next);
		before_last_2->next = NULL;
		ft_putstr_fd("rrr\n", 1);
	}
}
