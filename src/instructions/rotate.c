/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:52:35 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/01 02:21:45 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	rotate(t_list **stack)
{
	t_list	*last;
	t_list	*first;

	if (!stack || !(*stack) || !(*stack)->next)
		return;
	first = *stack;
	last = ft_lstlast(*stack);
	last->next = first;
	first->previous = last;
	*stack = (*stack)->next;
	first->next = NULL;
	(*stack)->previous = NULL;
}

void	ra(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) < 2 || !stack_a)
		return ;
	rotate(stack_a);
}

void	rb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b) < 2 || !stack_b)
		return ;
	rotate(stack_b);
}

void rr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) > 2 || stack_a)
		rotate(stack_a);
	if (ft_lstsize(*stack_b) > 2 || stack_b)
		rotate(stack_b);
}