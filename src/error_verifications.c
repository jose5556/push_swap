/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_verifications.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 01:38:37 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/12 05:27:33 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int		have_repetitive_nums(t_list *stack_a)
{
	t_list	*temp;
	int		num;

	temp = stack_a;
	while (temp)
	{
		num = stack_a->content;
		while (stack_a->next)
		{
			stack_a = stack_a->next;
			if (num == stack_a->content)
				return (1);
		}
		temp = temp->next;
		stack_a = temp;
	}
	return (0);
}

static int	ft_numcheck(char *argv)
{
	int	len;
	
	len = ft_strlen(--argv);
	while (len > -1)
	{
		if (!ft_isdigit(argv[len]))
			return (0);
		len--;
	}
	return (1);
}

void	error_check(int	argc, char **argv, t_list **stack_a, t_list **stack_b)
{
	while (argc)
	{
		if (!ft_numcheck(argv[argc]))
			exit_program(stack_a, stack_b);
		argc--;
	}
	if (have_repetitive_num(*stack_a))
		exit_program(stack_a, stack_b);
}

void	exit_program(t_list **stack_a, t_list **stack_b)
{
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
	ft_printf("%s", ERROR_MESSAGE);
	exit(EXIT_FAILURE);
}
