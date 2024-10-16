/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_verifications.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 01:38:37 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/16 03:03:48 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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

static int	have_repetitive_nums(char **argv)
{
	int		i;
	char	*temp;

	i = 1;
	while (*argv)
	{
		temp = *argv;
		while (argv[i])
		{
			if (argv[i] == temp)
				return (1);
			i++;
		}
		argv++;
	}
	return (0);
}

void	error_check(int	argc, char **argv, t_list **stack_a, t_list **stack_b)
{
	while (--argc)
	{
		if (!ft_numcheck(argv[argc]))
			exit_program(stack_a, stack_b);
	}
	if (have_repetitive_nums(argv))
		exit_program(stack_a, stack_b);
}

void	exit_program(t_list **stack_a, t_list **stack_b)
{
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
	ft_printf("%s", ERROR_MESSAGE);
	exit(EXIT_FAILURE);
}
