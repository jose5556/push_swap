/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:52:35 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/06 07:20:40 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	rotate(t_list **stack)
{
	t_list	*last;
	t_list	*first;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	first = *stack;
	last = ft_lstlast(*stack);
	last->next = first;
	first->previous = last;
	*stack = first->next;
	first->next = NULL;
	if (*stack)
		(*stack)->previous = NULL;
}

void	ra(t_list **stack_a, int flag)
{
	if (ft_lstsize(*stack_a) < 2 || !stack_a)
		return ;
	if (flag)
		ft_printf("ra\n");
	rotate(stack_a);
}

void	rb(t_list **stack_b, int flag)
{
	if (ft_lstsize(*stack_b) < 2 || !stack_b)
		return ;
	if (flag)
		ft_printf("rb\n");
	rotate(stack_b);
}

void	rr(t_list **stack_a, t_list **stack_b, int flag)
{
	if (ft_lstsize(*stack_a) > 2 && stack_a)
		rotate(stack_a);
	if (ft_lstsize(*stack_b) > 2 && stack_b)
		rotate(stack_b);
	if (flag)
		ft_printf("rr\n");
}
