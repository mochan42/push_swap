/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error_handling.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:41:48 by mochan            #+#    #+#             */
/*   Updated: 2022/07/14 22:34:24 by mochan           ###   ########.fr       */
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
	long int	c;

	c = ft_atoli(s);
	if (c < -2147483648 || c > 2147483647 || ft_strlen(s) > 11)
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

// int	check_input(int argc, char **argv)
// {
// 	int		err;
// 	int		err_1;
// 	int		err_2;
// 	int		i;
// 	char	*str;

// 	i = 1;
// 	err = 0;
// 	if (argc == 1)
// 		return (0);
// 	if (argc == 2)
// 	{
// 		str = ft_strjoin("!placeholder ", argv[1]);
// 		argv = ft_split(str, ' ');
// 		free(str);
// 		argc = count_arguments(argv);
// 		while (i < argc)
// 		{
// 			err_1 = check_for_not_a_digit(argv[i]);
// 			err_2 = out_of_range_number(argv[i]);
// 			err = err + err_1 + err_2;
// 			i++;
// 		}
// 		free_args(argv);
// 	}
// 	while (i < argc)
// 	{
// 		err_1 = check_for_not_a_digit(argv[i]);
// 		err_2 = out_of_range_number(argv[i]);
// 		err = err + err_1 + err_2;
// 		i++;
// 	}
// 	err = err + check_for_duplicate(argc, argv);
// 	return (err);
// }
