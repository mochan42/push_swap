/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:11:19 by mochan            #+#    #+#             */
/*   Updated: 2022/06/27 09:44:08 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*before_last_node(t_node *node)
{
	if (node == NULL)
		return (NULL);
	if (node->next == NULL)
		return (NULL);
	if (node->next->next == NULL)
		return (node);
	else
		return (before_last_node(node->next));
}

void	node_add_front(t_node **node, t_node *new)
{
	new->next = *node;
	*node = new;
}

t_node	*find_min_node(t_node *head)
{
	t_node	*current;
	t_node	*min_node;
	int		min;

	if (head == NULL)
		return (NULL);
	current = head;
	min = head->value;
	while (current != NULL)
	{
		if (min > current->value)
		{
			min = current->value;
			min_node = current;
		}
		current = current->next;
	}
	return (min_node);
}

int	find_min_value(t_node *head)
{
	t_node	*current;
	int		min;

	if (head == NULL)
		return (0);
	current = head;
	min = head->value;
	while (current != NULL)
	{
		if (min > current->value)
			min = current->value;
		current = current->next;
	}
	return (min);
}
