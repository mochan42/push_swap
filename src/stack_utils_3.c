/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:30:54 by moninechan        #+#    #+#             */
/*   Updated: 2022/07/16 11:32:59 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* printlist_index:
*	print the index of the nodes of a linked list.
*	useful function to check if the indexes are sorted for radix sort.
*	not required for the project.
*/
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
