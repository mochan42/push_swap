/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:17:46 by mochan            #+#    #+#             */
/*   Updated: 2022/07/08 14:19:09 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_node	*head_a;
	t_node	*head_b;

	if (check_input(argc, argv) > 0)
		ft_putstr_fd("Error\n", 1);
	// head_a = stack_init(argc, argv);
	// head_b = NULL;
	// ft_printf("stack A input : ");
	printlist(head_a);
	ft_printf("\n");
	if (argc > 2 && argc < 5 && check_input(argc, argv) == 0)
		redirect_23(argc, &head_a);
	else if (argc > 4 && argc < 7 && check_input(argc, argv) == 0)
		redirect_45(argc, &head_a, &head_b);
	else if (argc > 6 && check_input(argc, argv) == 0)
		radix_sort(&head_a, &head_b);
	// ft_printf("stack A sorted : ");
	// printlist(head_a);
	// ft_printf("\n");
	return (0);
}
