/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_elements_actions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:22:14 by mochan            #+#    #+#             */
/*   Updated: 2022/06/26 19:46:10 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3_method_1(t_node **head_1)
{
	move_swap_c(head_1, 'a');
	move_rotate_c(head_1, 'a');
}

void	sort_3_method_2(t_node **head_1)
{
	move_swap_c(head_1, 'a');
}

void	sort_3_method_3(t_node **head_1)
{
	move_reverse_rotate_c(head_1, 'a');
}

void	sort_3_method_4(t_node **head_1)
{
	move_rotate_c(head_1, 'a');
}

void	sort_3_method_5(t_node **head_1)
{
	move_swap_c(head_1, 'a');
	move_reverse_rotate_c(head_1, 'a');
}
