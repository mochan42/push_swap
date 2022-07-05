/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_n_elements_radix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:07:13 by moninechan        #+#    #+#             */
/*   Updated: 2022/07/05 09:42:56 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	give_index(t_node *head_1)
{
	t_node	*tmp;
	int		k;

	k = 0;
	tmp = head_1;
	while (tmp != NULL)
	{
		tmp->index = k;
		tmp = tmp->next;
		k++;
	}
}

void	radix_sort(t_node **head_1)
{
	give_index(*head_1);
	printlist_index(*head_1);
}
