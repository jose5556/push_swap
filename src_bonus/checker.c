/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:03:25 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/07 12:36:10 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	exec_command(char *command, t_list **stack_a, t_list **stack_b)
{
	if (!(ft_strcmp(command, "rra\n")))
		rra(stack_a, 0);
	else if (!(ft_strcmp(command, "rrb\n")))
		rrb(stack_b, 0);
	else if (!(ft_strcmp(command, "rrr\n")))
		rrr(stack_a, stack_b, 0);
	else if (!(ft_strcmp(command, "sa\n")))
		sa(stack_a, 0);
	else if (!(ft_strcmp(command, "sb\n")))
		sb(stack_b, 0);
	else if (!(ft_strcmp(command, "ss\n")))
		ss(stack_a, stack_b, 0);
	else if (!(ft_strcmp(command, "pa\n")))
		pa(stack_b, stack_a, 0);
	else if (!(ft_strcmp(command, "pb\n")))
		pb(stack_a, stack_b, 0);
	else if (!(ft_strcmp(command, "ra\n")))
		ra(stack_a, 0);
	else if (!(ft_strcmp(command, "rb\n")))
		rb(stack_b, 0);
	else if (!(ft_strcmp(command, "rr\n")))
		rr(stack_a, stack_b, 0);
	else
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*command;
	int		flag;

	flag = 0;
	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (1);
	error_check(argc - 1, argv + 1, &stack_a);
	while ((command = get_next_line(0)) && command)
	{
		if (!(exec_command(command, &stack_a, &stack_b)))
			flag = 1;
		free(command);
	}
	if (is_sorted(stack_a) && !(ft_lstsize(stack_b)) && !flag)
		exit_checker_success(&stack_a);
	else
		exit_checker_failure(&stack_a, &stack_b, command, flag);
}
