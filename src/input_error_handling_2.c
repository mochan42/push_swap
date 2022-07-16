/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error_handling_2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:17:02 by mochan            #+#    #+#             */
/*   Updated: 2022/07/16 11:22:59 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* check_input_method_1_prep_argv:
*	Corresponds to the 2nd case.
*	Split the string into different arguments.
*/
char	**check_input_method_1_prep_argv(char **args)
{
	char	*str;
	char	**argv;

	str = ft_strjoin("!placeholder ", args[1]);
	argv = ft_split(str, ' ');
	free(str);
	return (argv);
}

/* check_input_method_1_prep_argc:
*	Corresponds to the 2nd case.
*	Count the number of arguments adter the string is split.
*/
int	check_input_method_1_prep_argc(char **args)
{
	char	*str;
	char	**argv;
	int		argc;

	str = ft_strjoin("!placeholder ", args[1]);
	argv = ft_split(str, ' ');
	free(str);
	argc = count_arguments(argv);
	free_args(argv);
	return (argc);
}

/* check_input_method_1:
*	Corresponds to the 2nd case.
*	Each argument of args is checked one by one after being split.
*	Free the arrays before exiting the function is mandatory to avoid
*	memory leaks.
*/
int	check_input_method_1(char **args)
{
	char	**argv;
	int		argc;
	int		i;
	int		err_1;
	int		err;

	i = 1;
	err = 0;
	argv = check_input_method_1_prep_argv(args);
	argc = check_input_method_1_prep_argc(args);
	while (i < argc)
	{
		err_1 = check_for_not_a_digit(argv[i]) + out_of_range_number(argv[i]);
		err = err + err_1;
		i++;
	}
	err = err + check_for_duplicate(argc, argv);
	free_args(argv);
	return (err);
}

/* check_input_method_2:
*	Corresponds to the 3rd case.
*	Each argument of args is checked one by one.
*/
int	check_input_method_2(int n, char **args)
{
	int	i;
	int	err_1;
	int	err;

	i = 1;
	err = 0;
	while (i < n)
	{
		err_1 = check_for_not_a_digit(args[i]) + out_of_range_number(args[i]);
		err = err + err_1;
		i++;
	}
	err = err + check_for_duplicate(n, args);
	return (err);
}

/* check_input:
*	"main" function to handle error input.
*	3 different cases are identified :
*		(1) 0 parameter => do nothing
*		(2) 1 parameter => could be a string containing one number or a string
*			containing a list of numbers.
*		(3) more than 1 parameter => it is not a single string containing a
*			list of numbers, we have a list of strings.
*/
int	check_input(int argc, char **argv)
{
	int		err;
	int		res_1;
	int		res_2;

	err = 0;
	res_1 = 0;
	res_2 = 0;
	if (argc == 1)
		return (0);
	if (argc == 2)
		res_1 = check_input_method_1(argv);
	if (argc > 2)
		res_2 = check_input_method_2(argc, argv);
	err = res_1 + res_2;
	return (err);
}
