/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error_handling.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:41:48 by mochan            #+#    #+#             */
/*   Updated: 2022/06/26 17:20:13 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	out_of_range_number(char *s)
{
	long long int	c;
	char			*str;

	c = ft_atoi(s);
	str = ft_pitoa(c);
	if (c < -2147483647 || c > 2147483647 || ft_strlen(str) > 11)
		return (1);
	return (0);
}

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

int	check_input(int argc, char **argv)
{
	int	err;
	int	i;

	i = 1;
	if (argc == 1 || argc == 2)
		err = 0;
	err = 0;
	while (i < argc)
	{
		err = check_for_not_a_digit(argv[i]) + out_of_range_number(argv[i]);
		if (err > 0)
			return (err);
		i++;
	}
	err = err + check_for_duplicate(argc, argv);
	if (err > 0)
		return (err);
	return (err);
}
