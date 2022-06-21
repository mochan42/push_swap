/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:17:46 by mochan            #+#    #+#             */
/*   Updated: 2022/06/19 18:20:45 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*head_a;

	head_a = stack_init(argc, argv);

	ft_printf("Number of arguments %d\n", argc);
	
	ft_printf("Linked list for stack A copied from input:\n");
	printlist(head_a);

	return (0);
}