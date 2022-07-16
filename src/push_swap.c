/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:17:46 by mochan            #+#    #+#             */
/*   Updated: 2022/07/16 10:32:44 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* main:
*	Checks if the input is correct.
*	Initializes stacks a and b and count number of numbers in stack a.
*	Check if stack a is sorted.
*	If not, sort stack a depending on how many elements are in the list:
*		up to 5 numbers	: sort is hard-coded.
*		> % numbers		: sort is done with radix algorithm.
*	Free stacks to avoid memory leaks.
*/
int	main(int argc, char **argv)
{
	t_node	*head_a;
	t_node	*head_b;
	int		b_sorted;
	int		b_input_nok;
	int		size;

	b_input_nok = check_input(argc, argv);
	if (b_input_nok > 0)
		ft_putstr_fd("Error\n", 1);
	head_a = stack_init(argc, argv);
	head_b = NULL;
	size = ft_plstsize(head_a);
	b_sorted = check_if_sorted(&head_a);
	if (b_sorted == 1)
		b_sorted = 1;
	else if (size > 1 && size < 4 && b_sorted != 1 && b_input_nok == 0)
		redirect_23(size, &head_a);
	else if (size > 3 && size < 6 && b_sorted != 1 && b_input_nok == 0)
		redirect_45(size, &head_a, &head_b);
	else if (size > 5 && b_sorted != 1 && b_input_nok == 0)
		radix_sort(&head_a, &head_b);
	free_list(head_a);
	free_list(head_b);
	return (0);
}
