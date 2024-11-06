/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 02:23:08 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/06 07:08:56 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	push(t_list **stack_1, t_list **stack_2)
{
	t_list	*top;

	if (!(*stack_1))
		return ;
	top = *stack_1;
	*stack_1 = (*stack_1)->next;
	if (*stack_1)
		(*stack_1)->previous = NULL;
	top->next = *stack_2;
	if (*stack_2)
		(*stack_2)->previous = top;
	*stack_2 = top;
}

void	pa(t_list **stack_b, t_list **stack_a, int flag)
{
	if (!stack_b || !(*stack_b))
		return ;
	if (flag)
		ft_printf("pa\n");
	push(stack_b, stack_a);
}

void	pb(t_list **stack_a, t_list **stack_b, int flag)
{
	if (!stack_a || !(*stack_a))
		return ;
	if (flag)
		ft_printf("pb\n");
	push(stack_a, stack_b);
}
