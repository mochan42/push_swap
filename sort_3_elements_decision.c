/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_elements_decision.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:42:21 by mochan            #+#    #+#             */
/*   Updated: 2022/06/26 19:43:20 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
