/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 00:51:44 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/06 07:09:35 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	reverse_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	last = ft_lstlast(*stack);
	first = *stack;
	if (last->previous)
		last->previous->next = NULL;
	last->previous = NULL;
	last->next = first;
	first->previous = last;
	*stack = last;
}

void	rra(t_list **stack_a, int flag)
{
	if (ft_lstsize(*stack_a) < 2 || !stack_a)
		return ;
	if (flag)
		ft_printf("rra\n");
	reverse_rotate(stack_a);
}

void	rrb(t_list **stack_b, int flag)
{
	if (ft_lstsize(*stack_b) < 2 || !stack_b)
		return ;
	if (flag)
		ft_printf("rrb\n");
	reverse_rotate(stack_b);
}

void	rrr(t_list **stack_a, t_list **stack_b, int flag)
{
	if (ft_lstsize(*stack_a) > 2 && stack_a)
		reverse_rotate(stack_a);
	if (ft_lstsize(*stack_b) > 2 && stack_b)
		reverse_rotate(stack_b);
	if (flag)
		ft_printf("rrr\n");
}
