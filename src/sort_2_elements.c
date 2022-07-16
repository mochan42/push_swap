/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_elements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:23:26 by mochan            #+#    #+#             */
/*   Updated: 2022/07/16 10:36:25 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* sort_2:
*	sorting method for 2 numbers.
*	if the 1st number > 2nd number, we just rotate them.
*	otherwise, the list is already sorted.
*/
void	sort_2(t_node **head_1)
{
	int	first;
	int	second;

	first = (*head_1)->value;
	second = (*head_1)->next->value;
	if (first > second)
	{
		move_rotate_c(head_1, 'a');
	}
}
