/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error_handling.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:41:48 by mochan            #+#    #+#             */
/*   Updated: 2022/06/22 23:45:21 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_for_not_a_digit(char *s)
{
	if (*s && (*s == '-'))
		s++;
	while (*s)
	{
		if (ft_isdigit(*s) != 1)
			return (1);
		s++;
	}
	return (0);
}

static int	out_of_range_number(char *s)
{
	long long int c;

	if (ft_strlen(s) > 11)
		return (1);
	c = ft_atoi(s);
	if (c < -2147483647 || c > 2147483647)
		return (1);
	return (0);
}

int	check_input(int argc, char **argv)
{
	int	err;
	int	i;

	i = 1;
	if (argc == 1)
		err = 0;
	while (i < argc)
	{
		err = check_for_not_a_digit(argv[i]);
		if (err > 0)
			return (err);
		err = out_of_range_number(argv[i]);
		if (err > 0)
			return (err);
		i++;
	}
	return (err);
}
