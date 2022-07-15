/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:35:17 by mochan            #+#    #+#             */
/*   Updated: 2022/07/15 19:08:56 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	check_if_sorted(t_node **head_1)
{
	t_node	*tmp;
	int		size;
	int		counter_list_is_sorted;
	int		b_list_is_sorted;

	tmp = *head_1;
	size = ft_plstsize(*head_1);
	counter_list_is_sorted = 0;
	b_list_is_sorted = 0;
	while (tmp != NULL && tmp->next != NULL)
	{
		if (tmp->value < tmp->next->value)
			counter_list_is_sorted++;
		tmp = tmp->next;
	}
	if (counter_list_is_sorted == (size - 1))
		b_list_is_sorted = 1;
	return (b_list_is_sorted);
}
