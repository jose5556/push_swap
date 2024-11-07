/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 03:11:00 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/07 10:25:11 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	if (second->next)
		second->next->previous = first;
	second->next = first;
	second->previous = NULL;
	first->previous = second;
	*stack = second;
}

void	sa(t_list **stack_a, int flag)
{
	if (ft_lstsize(*stack_a) < 2 || !stack_a)
		return ;
	if (flag)
		ft_printf("sa\n");
	swap(stack_a);
}

void	sb(t_list **stack_b, int flag)
{
	if (ft_lstsize(*stack_b) < 2 || !stack_b)
		return ;
	if (flag)
		ft_printf("sb\n");
	swap(stack_b);
}

void	ss(t_list **stack_a, t_list **stack_b, int flag)
{
	if (ft_lstsize(*stack_a) > 2 && stack_a)
		swap(stack_a);
	if (ft_lstsize(*stack_b) > 2 && stack_b)
		swap(stack_b);
	if (flag)
		ft_printf("ss\n");
}
