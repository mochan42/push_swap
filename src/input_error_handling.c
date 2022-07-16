/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error_handling.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:41:48 by mochan            #+#    #+#             */
/*   Updated: 2022/07/16 11:21:41 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* check_for_not_a_digit:
*	Returns 1 if a string contains a character which is not a digit.
*/
int	check_for_not_a_digit(char *s)
{
	if (*s && (*s == '-' || *s == '+'))
		s++;
	while (*s)
	{
		if (ft_isdigit(*s) != 1)
			return (1);
		s++;
	}
	return (0);
}

/* out_of_range_number:
*	Returns 1 if a string corresponds to a number which is > MAX INT or < MAX INT.
*	Note that we need to use a conversion from string to long int (ft_atoli) so
*	that the comparisons make sense otherwise there is an overflow.
*/
int	out_of_range_number(char *s)
{
	long int	c;

	c = ft_atoli(s);
	if (c < -2147483648 || c > 2147483647 || ft_strlen(s) > 11)
		return (1);
	return (0);
}

/* check_for_duplicate:
*	Returns 1 if two same numbers are found.
*	Free the arrays is mandatory to avoid memory leaks.
*/
int	check_for_duplicate(int argc, char **argv)
{
	int	*list_of_numbers;
	int	i;
	int	j;
	int	b_duplicate;

	b_duplicate = 0;
	list_of_numbers = (int *)malloc(sizeof(int) * (argc - 1));
	if (list_of_numbers == NULL)
		return (1);
	i = -1;
	while (++i < argc - 1)
		list_of_numbers[i] = ft_atoi(argv[i + 1]);
	i = -1;
	while (++i < argc - 2)
	{
		j = i;
		while (++j < argc - 1)
			if (list_of_numbers[i] == list_of_numbers[j])
				b_duplicate = 1;
	}
	free(list_of_numbers);
	list_of_numbers = NULL;
	return (b_duplicate);
}

/* int	count_arguments:
*	Helper function for check_input_method_1_prep_argc.
*/
int	count_arguments(char **arguments)
{
	int	counter;

	counter = 0;
	while (*arguments)
	{
		arguments++;
		counter++;
	}
	return (counter);
}
