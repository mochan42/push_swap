/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:11:19 by mochan            #+#    #+#             */
/*   Updated: 2022/06/23 17:15:33 by mochan           ###   ########.fr       */
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
