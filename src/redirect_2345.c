/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirect_2345.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:58:52 by mochan            #+#    #+#             */
/*   Updated: 2022/07/16 10:34:16 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* redirect_23:
*	chooses sorting method depending on if is there are 2 or 3 numbers in the list.
*/
void	redirect_23(int n, t_node **head)
{
	if (n == 2)
		sort_2(head);
	if (n == 3)
		sort_3(head);
}

/* redirect_45:
*	chooses sorting method depending on if is there are 4 or 5 numbers in the list.
*/
void	redirect_45(int n, t_node **head_1, t_node **head_2)
{
	if (n == 4)
		sort_4(head_1, head_2);
	if (n == 5)
		sort_5(head_1, head_2);
}
