/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:00:39 by mochan            #+#    #+#             */
/*   Updated: 2022/06/22 22:57:31 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ########################################################################## */
/* INCLUDES */

#include <stdlib.h>
#include <unistd.h>
#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"

/* ########################################################################## */
/* STRUCTURES */

typedef struct s_node
{
	struct s_node		*next;
	int					value;
}	t_node;


/* ########################################################################## */
/* FUNCTIONS */

/* stack utils */
t_node		*last_node(t_node *node);
void		node_add_back(t_node **node, t_node *new);
t_node		*stack_init(int argc, char **argv);
void		printlist(t_node *head);
int			not_unique(int argc, char **argv);
int			not_valid_arguments(int argc, char **argv);
int			check_input(int argc, char **argv);
#endif