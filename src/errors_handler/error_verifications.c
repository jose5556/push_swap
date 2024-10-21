/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_verifications.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 01:38:37 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/21 14:38:12 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	have_repetitive_nums(char **argv, int argc)
{
	int		i;
	int		j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j <= argc)
		{
			if (!ft_strncmp(argv[i], argv[j],
					ft_strlen(argv[i]) + ft_strlen(argv[j])))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static void	args_to_lst(t_list **stack_a, char **argv)
{
	int		temp;
	int		i;

	i = 1;
	while (argv[i])
	{
		temp = ft_atoi_int(argv[i]);
		ft_lstadd_back(stack_a, temp);
		i++;
	}
}

static int	ft_numcheck(char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (argv[j])
	{
		if ((argv[j][i] == '-' || argv[j][i] == '+') && argv[j][i + 1])
			i++;
		while (argv[j][i])
		{
			if (!ft_isdigit(argv[j][i]))
				return (0);
			i++;
		}
		j++;
		i = 0;
	}
	return (1);
}

static void	num_islimited(char **argv, int argc)
{
	long	result;
	int		check_value;

	result = 0;
	check_value = 1;
	ft_atoi(argv, argc, result, check_value);
}

void	error_check(int argc, char **argv, t_list **stack_a)
{
	int		i;
	char	**args;

	i = 0;
	if (argc == 1)
		args = ft_split(argv[0], " \t\n");
	else
		args = argv;
	while (args[i])
		i++;
	if (i == 1)
		exit_program(argc, args);
	if (!ft_numcheck(args) || have_repetitive_nums(args, --i))
		exit_program(argc, args);
	num_islimited(args, argc);
	args_to_lst(stack_a, args);
	if (argc == 1)
		free_args(args);
}
