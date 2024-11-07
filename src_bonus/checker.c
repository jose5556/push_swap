/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:03:25 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/07 11:04:45 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

int	check_command(char *command)
{
if (!(ft_strncmp(command, "sa", 2)))	
		return (1);
	else if (!(ft_strncmp(command, "sb", 2)))
		return (1);
	else if (!(ft_strncmp(command, "ss", 2)))
		return (1);
	else if (!(ft_strncmp(command, "pa", 2)))
		return (1);
	else if (!(ft_strncmp(command, "pb", 2)))
		return (1);
	else if (!(ft_strncmp(command, "ra", 2)))
		return (1);
	else if (!(ft_strncmp(command, "rb", 2)))
		return (1);
	else if (!(ft_strncmp(command, "rr", 2)))
		return (1);
	else if (!(ft_strncmp(command, "rra", 3)))
		return (1);
	else if (!(ft_strncmp(command, "rrb", 3)))
		return (1);
	else if (!(ft_strncmp(command, "rrr", 3)))
		return (1);
	return (0);
}

void	exec_command(char *command, t_list **stack_a, t_list **stack_b)
{
	if (!(ft_strncmp(command, "sa", 2)))	
		sa(stack_a, 0);
	else if (!(ft_strncmp(command, "sb", 2)))
		sb(stack_b, 0);
	else if (!(ft_strncmp(command, "ss", 2)))
		ss(stack_a, stack_b, 0);
	else if (!(ft_strncmp(command, "pa", 2)))
		pa(stack_b, stack_a, 0);
	else if (!(ft_strncmp(command, "pb", 2)))
		pb(stack_a, stack_b, 0);
	else if (!(ft_strncmp(command, "ra", 2)))
		ra(stack_a, 0);
	else if (!(ft_strncmp(command, "rb", 2)))
		rb(stack_b, 0);
	else if (!(ft_strncmp(command, "rr", 2)))
		rr(stack_a, stack_b, 0);
	else if (!(ft_strncmp(command, "rra", 3)))
		rra(stack_a, 0);
	else if (!(ft_strncmp(command, "rrb", 3)))
		rrb(stack_b, 0);
	else if (!(ft_strncmp(command, "rrr", 3)))
		rrr(stack_a, stack_b, 0);
	free(command);
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
	while ((command = get_next_line(0)) && command && !flag)
	{
		if (!(check_command(command)))
			flag = 1;
		exec_command(command, &stack_a, &stack_b);
	}
	if (is_sorted(stack_a) && !(ft_lstsize(stack_b)))
		exit_checker_success(&stack_a);
	else
		exit_checker_failure(&stack_a, &stack_b, command);
}
