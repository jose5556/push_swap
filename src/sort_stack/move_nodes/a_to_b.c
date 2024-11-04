/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:00:23 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/04 06:14:22 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

static t_list	*find_cheapest(t_list *stack_a)
{
	while (!(stack_a->cheapest))
		stack_a = stack_a->next;
	return (stack_a);
}

static void	rotate(t_list **a, t_list **b, t_list *move, int flag)
{
	while (*a != move && *b != move->target_node)
	{
		if (flag == 0)
			rr(a, b);
		else
			rrr(a, b);
	}
	set_index(a);
	set_index(b);
}

void	move_a_to_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*to_move;

	to_move = find_cheapest(*stack_a);
	if (to_move->above_median && to_move->target_node->above_median)
		rotate(stack_a, stack_b, to_move, 1);
	if (!(to_move->above_median) && (!to_move->target_node->above_median))
		rotate(stack_a, stack_b, to_move, 0);
	super_mini_sort(stack_a, to_move, 0);
	super_mini_sort(stack_b, to_move->target_node, 1);
	pb(stack_a, stack_b);
}
