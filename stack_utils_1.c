/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:27:00 by mochan            #+#    #+#             */
/*   Updated: 2022/07/09 18:06:35 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*last_node(t_node *node)
{
	if (node == NULL)
		return (NULL);
	if (node->next == NULL)
		return (node);
	else
		return (last_node(node->next));
}

static t_node	*new_node(int value)
{
	t_node	*p;

	p = (t_node *)malloc(sizeof(t_node));
	if (p == NULL)
		return (NULL);
	p->value = value;
	p->next = NULL;
	return (p);
}

void	node_add_back(t_node **node, t_node *new)
{
	t_node	*p;

	if (*node == NULL)
		*node = new;
	else
	{
		p = last_node(*node);
		p->next = new;
	}
}

t_node	*stack_init(int argc, char **argv)
{	
	int		i;
	t_node	*head;
	char	**args;
	int		k;

	i = 0;
	head = NULL;
	k = 3;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		while (args[i])
			node_add_back(&head, new_node(ft_atoi(args[i++])));
	}
	if (argc > 2)
	{
		i = 1;
		args = argv;
		while (args[i])
			node_add_back(&head, new_node(ft_atoi(args[i++])));
	}
	return (head);
}

void	printlist(t_node *head)
{
	t_node	*temporary;

	temporary = head;
	while (temporary != NULL)
	{
		ft_printf("%d ", temporary->value);
		temporary = temporary->next;
	}
	ft_printf("\n");
}
