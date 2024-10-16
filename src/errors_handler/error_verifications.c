/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_verifications.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 01:38:37 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/16 04:26:30 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	ft_numcheck(char *argv)
{
	size_t	i;

	i = 0;
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
			ft_printf("%s\n", argv[j]);
			if (!ft_strncmp(argv[i], argv[j], ft_strlen(argv[i])))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static void	args_to_lst(t_list **stack_a, char **argv)
{
	int	temp;
	int	i;

	i = 1;
	while (argv[i])
	{
		temp = ft_atoi_int(argv[1]);
		ft_lstadd_back(stack_a, temp);
		argv++;
	}
}

void	error_check(int argc, char **argv, t_list **stack_a, t_list **stack_b)
{
	int	argc2;

	argc2 = argc;
	while (--argc)
	{
		if (!ft_numcheck(argv[argc]))
			exit_program(stack_a, stack_b);
	}
	if (have_repetitive_nums(argv, --argc2))
		exit_program(stack_a, stack_b);
	args_to_lst(stack_a, argv);
}

void	exit_program(t_list **stack_a, t_list **stack_b)
{
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
	ft_printf("%s", ERROR_MESSAGE);
	exit(EXIT_FAILURE);
}
