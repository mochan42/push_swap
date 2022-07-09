/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:00:39 by mochan            #+#    #+#             */
/*   Updated: 2022/07/10 00:43:29 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ########################################################################## */
/* INCLUDES */

# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

/* ########################################################################## */
/* STRUCTURES */

typedef struct s_node
{
	struct s_node	*next;
	int				value;
	int				index;
}	t_node;

/* ########################################################################## */
/* FUNCTIONS */

/* check_if_sorted.c */
int				check_if_sorted(t_node **head_1);

/* free_utils.c */
void			free_list(t_node *head);
void			free_args(char **args);

/* input_error_handling.c */
int				check_for_duplicate(int argc, char **argv);
int				check_input(int argc, char **argv);
int				check_for_not_a_digit(char *s);
int				out_of_range_number(char *s);

/* moves_both_stacks.c */
void			move_ss(t_node **head_1, t_node **head_2);
void			move_rr(t_node **head_1, t_node **head_2);
void			move_rrr(t_node **head_1, t_node **head_2);

/* moves_single_stack.c */
void			move_push_c(t_node **stack_to, t_node **stack_from, char c);
void			move_rotate_c(t_node **head, char c);
void			move_reverse_rotate_c(t_node **head, char c);
void			move_swap_c(t_node **head, char c);

/* redirect_2345.c */
void			redirect_23(int n, t_node **head);
void			redirect_45(int n, t_node **head_1, t_node **head_2);

/* sort_2_elements.c */
void			sort_2(t_node **head_1);

/* sort_3_elements_decision.c */
void			sort_3(t_node **head_1);

/* sort_3_elements_actions.c */
void			sort_3_method_1(t_node **head_1);
void			sort_3_method_2(t_node **head_1);
void			sort_3_method_3(t_node **head_1);
void			sort_3_method_4(t_node **head_1);
void			sort_3_method_5(t_node **head_1);

/* sort_4_elements.c */
void			sort_4_method_1(t_node **head_1, t_node **head_2);
void			sort_4(t_node **head_1, t_node **head_2);

/* sort_5_elements.c */
void			sort_5_method_1(t_node **head_1, t_node **head_2);
void			sort_5_decision(t_node **head_1, t_node **head_2, int n);
void			sort_5(t_node **head_1, t_node **head_2);

/* sort_n_elements_radix.c */
int				*create_index(int *array, int size, t_node *head_1);
void			fill_index(t_node *head_1, int *array);
void			radix_sort_method_1(t_node **head_1, t_node **head_2, int n);
void			radix_sort(t_node **head_1, t_node **head_2);

/* stack_utils_1.c */
t_node			*last_node(t_node *node);
t_node			*new_node(int value);
void			node_add_back(t_node **node, t_node *new);
void			printlist(t_node *head);
t_node			*stack_init(int argc, char **argv);

/* stack_utils_2.c */
t_node			*before_last_node(t_node *node);
void			node_add_front(t_node **node, t_node *new);
int				find_min_value(t_node *head);
t_node			*find_min_node(t_node *head);
int				ft_plstsize(t_node *head);

/* stack_utils_3.c */
void			printlist_index(t_node *head);

#endif
