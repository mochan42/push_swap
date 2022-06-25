/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:17:46 by mochan            #+#    #+#             */
/*   Updated: 2022/06/23 17:24:23 by mochan           ###   ########.fr       */
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
	ft_printf("\n");

	if (check_input(argc, argv) > 0)
	{
		ft_putstr_fd("Error\n", 2);
		
	}
	
	move_sa(&head_a);
	ft_printf("Stack A after sa:\n");
	printlist(head_a);
	ft_printf("\n");
	
	move_ra(&head_a);
	ft_printf("Stack A after ra:\n");
	printlist(head_a);
	ft_printf("\n");
	
	move_rra(&head_a);
	ft_printf("Stack A after rra:\n");
	printlist(head_a);
	ft_printf("\n");

	return (0);
}