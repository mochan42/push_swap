/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:17:46 by mochan            #+#    #+#             */
/*   Updated: 2022/06/27 09:29:31 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_node	*head_a;
	t_node	*head_b;
	t_node	*head_c;
	int		minimum;

	head_a = stack_init(argc, argv);
	head_b = NULL;
	head_c = find_min_node(head_a);
	minimum = find_min_value(head_a);

	ft_printf("Number of arguments %d\n\n", argc);
	
	ft_printf("A: ");
	printlist(head_a);
	ft_printf("B: ");
	printlist(head_b);
	// ft_printf("minimum of A is : %d\n", minimum);
	// ft_printf("node C is the minimum of A: ");
	// printlist(head_c);
	// ft_printf("Minimum of A is %d", head_c->value);
	// ft_printf("\n");
	
	if (check_input(argc, argv) > 0)
	{
		ft_putstr_fd("Error\n", 2);
		
	}

	// move_swap_c(&head_a, 'a');
	// ft_printf("A: ");
	// printlist(head_a);
	// ft_printf("B: ");
	// printlist(head_b);
	// ft_printf("\n");

	// move_rotate_c(&head_a, 'a');
	// ft_printf("A: ");
	// printlist(head_a);
	// ft_printf("B: ");
	// printlist(head_b);
	// ft_printf("\n");
	
	// move_reverse_rotate_c(&head_a, 'a');
	// ft_printf("A: ");
	// printlist(head_a);
	// ft_printf("B: ");
	// printlist(head_b);
	// ft_printf("\n");

	// move_push_c(&head_b, &head_a, 'b');
	// ft_printf("A: ");
	// printlist(head_a);
	// ft_printf("B: ");
	// printlist(head_b);
	// ft_printf("\n");

	// move_push_c(&head_b, &head_a, 'b');
	// ft_printf("A: ");
	// printlist(head_a);
	// ft_printf("B: ");
	// printlist(head_b);
	// ft_printf("\n");
	
	// move_push_c(&head_b, &head_a, 'b');
	// ft_printf("A: ");
	// printlist(head_a);
	// ft_printf("B: ");
	// printlist(head_b);
	// ft_printf("\n");

	// move_push_c(&head_b, &head_a, 'b');
	// ft_printf("A: ");
	// printlist(head_a);
	// ft_printf("B: ");
	// printlist(head_b);
	// ft_printf("\n");
	
	// move_ss(&head_a, &head_b);
	// ft_printf("A: ");
	// printlist(head_a);
	// ft_printf("B: ");
	// printlist(head_b);
	// ft_printf("\n");

	// move_rr(&head_a, &head_b);
	// ft_printf("A: ");
	// printlist(head_a);
	// ft_printf("B: ");
	// printlist(head_b);
	// ft_printf("\n");

	// move_rrr(&head_a, &head_b);
	// ft_printf("A: ");
	// printlist(head_a);
	// ft_printf("B: ");
	// printlist(head_b);
	// ft_printf("\n");
	
	if (argc > 2 && argc <5)
		redirect_23(argc, &head_a);
	else if (argc > 4 && argc <7)
		redirect_45(argc, &head_a, &head_b);
	else
		ft_printf("Not coded yet\n");

	ft_printf("A: ");
	printlist(head_a);
	ft_printf("B: ");
	printlist(head_b);
	ft_printf("\n");

	return (0);
}