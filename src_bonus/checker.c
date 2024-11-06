/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:03:25 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/06 08:23:40 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	exit_checker(t_list **a, t_list **b, t_simple_list **lst, char *command)
{
	if (*a)
		ft_lstclear(a);
	if (*b)
		ft_lstclear(b);
	if (*lst)
		ft_simple_lstclear(lst);
	if (*command)
		free(command);
	ft_printf("%s", ERROR_MESSAGE);
	exit(EXIT_FAILURE);
}

int	check_command(char *command, t_simple_list *lst)
{
	int	len;

	len = ft_strlen(command);
	while (lst)
	{
		if (!ft_strncmp(command, lst->name, len - 1))
			return (1);
		lst = lst->next;
	}
	return (0);
}

void	exec_command(char *command, t_list **stack_a, t_list **stack_b)
{
	int	len;

	len = ft_strlen(command);
	if (!(ft_strncmp(command, "sa", len)))
		sa(stack_a, 0);
	else if (!(ft_strncmp(command, "sb", len)))
		sb(stack_b, 0);
	else if (!(ft_strncmp(command, "ss", len)))
		ss(stack_a, stack_b, 0);
	else if (!(ft_strncmp(command, "pa", len)))
		pa(stack_b, stack_a, 0);
	else if (!(ft_strncmp(command, "pb", len)))
		pb(stack_a, stack_b, 0);
	else if (!(ft_strncmp(command, "ra", len)))
		ra(stack_a, 0);
	else if (!(ft_strncmp(command, "rb", len)))
		rb(stack_b, 0);
	else if (!(ft_strncmp(command, "rr", len)))
		rr(stack_a, stack_b, 0);
	else if (!(ft_strncmp(command, "rra", len)))
		rra(stack_a, 0);
	else if (!(ft_strncmp(command, "rrb", len)))
		rrb(stack_b, 0);
	else if (!(ft_strncmp(command, "rrr", len)))
		rrr(stack_a, stack_b, 0);
}

void	init_commands_name(t_simple_list **lst)
{
	ft_simple_lstadd_back(lst, "sa");
	ft_simple_lstadd_back(lst, "sb");
	ft_simple_lstadd_back(lst, "ss");
	ft_simple_lstadd_back(lst, "pa");
	ft_simple_lstadd_back(lst, "pb");
	ft_simple_lstadd_back(lst, "ra");
	ft_simple_lstadd_back(lst, "rb");
	ft_simple_lstadd_back(lst, "rr");
	ft_simple_lstadd_back(lst, "rra");
	ft_simple_lstadd_back(lst, "rrb");
	ft_simple_lstadd_back(lst, "rrr");
}

int	main(int argc, char *argv[])
{
	t_list			*stack_a;
	t_list			*stack_b;
	t_simple_list	*commands_name;
	char			*command;

	stack_a = NULL;
	stack_b = NULL;
	commands_name = NULL;
	if (argc < 2)
		return (1);
	error_check(argc - 1, argv + 1, &stack_a);
	init_commands_name(&commands_name);
	while ((command = get_next_line(0)) && command)
	{
		if (!(check_command(command, commands_name)))
			exit_checker(&stack_a, &stack_b, &commands_name, command);
		exec_command(command, &stack_a, &stack_b);
	}
	if (is_sorted(stack_a) && !(ft_lstsize(stack_b)))
	{
		ft_printf(OK_MESSAGE);
		ft_lstclear(&stack_a);
	}
}
