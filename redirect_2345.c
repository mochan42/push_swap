/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirect_2345.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:58:52 by mochan            #+#    #+#             */
/*   Updated: 2022/06/27 09:53:35 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	redirect_23(int n, t_node **head)
{
	if (n == 3)
		sort_2(head);
	if (n == 4)
		sort_3(head);
}

void	redirect_45(int n, t_node **head_1, t_node **head_2)
{
	if (n == 5)
		sort_4(head_1, head_2);
	if (n == 6)
		sort_5(head_1, head_2);
}
