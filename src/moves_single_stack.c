/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_single_stack.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:51:36 by mochan            #+#    #+#             */
/*   Updated: 2022/06/26 19:35:38 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* move_swap_c:
*	swap the 2 first nodes of the linked list.
*	the 2nd argument is for printing on which linked list the operation is
*	being performed:
*		c = 'a' for sa
*		c = 'b' for sb
*/
void	move_swap_c(t_node **head, char c)
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
		ft_putstr_fd("s", 1);
		ft_putchar(c);
		ft_putstr_fd("\n", 1);
	}
}

/* move_rotate_c:
*	move the first node of the linked list to the last position.
*	the 2nd argument is for printing on which linked list the operation is
*	being performed:
*		c = 'a' for ra
*		c = 'b' for rb
*/
void	move_rotate_c(t_node **head, char c)
{
	t_node	*tmp;

	if (*head && (*head)->next)
	{
		tmp = *head;
		*head = (*head)->next;
		tmp->next = NULL;
		node_add_back(head, tmp);
		ft_putstr_fd("r", 1);
		ft_putchar(c);
		ft_putstr_fd("\n", 1);
	}
}

/* move_reverse_rotate_c:
*	move the last node of the linked list to the first position.
*	the 2nd argument is for printing on which linked list the operation is
*	being performed:
*		c = 'a' for rra
*		c = 'b' for rrb
*/
void	move_reverse_rotate_c(t_node **head, char c)
{
	t_node	*before_last;

	if (*head && (*head)->next)
	{
		before_last = before_last_node(*head);
		node_add_front(head, before_last->next);
		before_last->next = NULL;
		ft_putstr_fd("rr", 1);
		ft_putchar(c);
		ft_putstr_fd("\n", 1);
	}
}

/* move_push_c:
*	Move the first node of the linked list "stack_from" to the first position
*	of the linked list "stack_to".
*	The 2nd argument is for printing on which linked list the operation is
*	being performed:
*		c = 'a' for pa
*		c = 'b' for pb
*/
void	move_push_c(t_node **stack_to, t_node **stack_from, char c)
{
	t_node	*tmp;

	if (stack_to && stack_from && *stack_from)
	{
		tmp = *stack_from;
		*stack_from = tmp->next;
		tmp->next = *stack_to;
		*stack_to = tmp;
		ft_putstr_fd("p", 1);
		ft_putchar(c);
		ft_putstr_fd("\n", 1);
	}
}
