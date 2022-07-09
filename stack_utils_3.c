/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:30:54 by moninechan        #+#    #+#             */
/*   Updated: 2022/07/09 20:16:42 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printlist_index(t_node *head)
{
	t_node	*temporary;

	temporary = head;
	while (temporary != NULL)
	{
		ft_printf("%d ", temporary->index);
		temporary = temporary->next;
	}
	ft_printf("\n");
}

void	free_list(t_node *head)
{
	t_node	*tmp;

	while(head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
