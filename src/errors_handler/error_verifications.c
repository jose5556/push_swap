/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_verifications.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 01:38:37 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/16 06:24:44 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	ft_numcheck(char *argv)
{
	size_t	i;

	i = 0;
	if ((argv[i] == '-' || argv[i] == '+') && argv[i+1])
		i++;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	have_repetitive_nums(char **argv, int argc)
{
	int		i;
	int		j;

	i = 1;
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

static void	num_islimited(char **argv)
{
	argv++;
	while (*argv)
	{
		ft_atoi(*argv);
		argv++;
	}
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

void	error_check(int argc, char **argv, t_list **stack_a)
{
	int	argc2;

	argc2 = argc;
	while (--argc)
	{
		if (!ft_numcheck(argv[argc]))
			exit_program();
	}
	if (have_repetitive_nums(argv, --argc2))
		exit_program();
	num_islimited(argv);
	args_to_lst(stack_a, argv);
}
