/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:27:00 by mochan            #+#    #+#             */
/*   Updated: 2022/07/16 11:32:29 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* *last_node:
*	Return the last node of a linked list.
*/
t_node	*last_node(t_node *node)
{
	if (node == NULL)
		return (NULL);
	if (node->next == NULL)
		return (node);
	else
		return (last_node(node->next));
}

/* *new_node:
*	Create a new node but it is not linked.
*/
t_node	*new_node(int value)
{
	t_node	*p;

	p = (t_node *)malloc(sizeof(t_node));
	if (!p)
		return (NULL);
	p->value = value;
	p->next = NULL;
	p->index = 0;
	return (p);
}

/* *new_node:
*	Create a new node at the end of the linked list.
*/
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

/* *stack_init:
*	Store the input parameter of the push_swap program into a linked list.
*/
t_node	*stack_init(int argc, char **argv)
{	
	int		i;
	t_node	*head;
	char	**args;

	i = 0;
	head = NULL;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		while (args[i])
			node_add_back(&head, new_node(ft_atoi(args[i++])));
		free_args(args);
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

/* printlist:
*	print the values of the nodes of a linked list.
*	useful function to check if the linked list is created, sorted, etc.
*	not required for the project.
*/
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
