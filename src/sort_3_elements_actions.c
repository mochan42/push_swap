/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_elements_actions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:22:14 by mochan            #+#    #+#             */
/*   Updated: 2022/07/16 10:55:07 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* sort_3_method_1:
*	first < second && second > third && third > first
*	example	: 1 3 2
*	sa		: 3 1 2
*	ra		: 1 2 3
*/
void	sort_3_method_1(t_node **head_1)
{
	move_swap_c(head_1, 'a');
	move_rotate_c(head_1, 'a');
}

/* sort_3_method_2:
*	first > second && second < third && third > first
*	example	: 2 1 3
*	sa		: 1 2 3
*/
void	sort_3_method_2(t_node **head_1)
{
	move_swap_c(head_1, 'a');
}

/* sort_3_method_3:
*	first < second && second > third && third < first
*	example	: 2 3 1
*	rra		: 1 2 3
*/
void	sort_3_method_3(t_node **head_1)
{
	move_reverse_rotate_c(head_1, 'a');
}

/* sort_3_method_4:
*	first > second && second < third && third < first
*	example	: 3 1 2
*	ra		: 1 2 3
*/
void	sort_3_method_4(t_node **head_1)
{
	move_rotate_c(head_1, 'a');
}

/* sort_3_method_5:
*	first > second && second < third && third < first
*	example	: 3 2 1
*	sa		: 2 3 1
*	rra		: 1 2 3
*/
void	sort_3_method_5(t_node **head_1)
{
	move_swap_c(head_1, 'a');
	move_reverse_rotate_c(head_1, 'a');
}
