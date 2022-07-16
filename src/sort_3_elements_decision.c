/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_elements_decision.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:42:21 by mochan            #+#    #+#             */
/*   Updated: 2022/07/16 10:48:11 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* sort_3:
*	sorting method for 3 numbers.
*	There are 5 possible arrangements of 3 numbers to which
*	a corresponding sorting method is applied.
*/
void	sort_3(t_node **head_1)
{
	int	first;
	int	second;
	int	third;

	first = (*head_1)->value;
	second = (*head_1)->next->value;
	third = (*head_1)->next->next->value;
	if (first < second && second > third && third > first)
		sort_3_method_1(head_1);
	if (first > second && second < third && third > first)
		sort_3_method_2(head_1);
	if (first < second && second > third && third < first)
		sort_3_method_3(head_1);
	if (first > second && second < third && third < first)
		sort_3_method_4(head_1);
	if (first > second && second > third && third < first)
		sort_3_method_5(head_1);
}
