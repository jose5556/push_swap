/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 03:34:34 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/06 04:43:53 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

static void	set_target(t_list *stack_a, t_list *stack_b)
{
	t_list	*b;
	t_list	*target;
	long	diff;

	while (stack_a)
	{
		diff = LONG_MIN;
		b = stack_b;
		while (b)
		{
			if (b->num < stack_a->num
				&& b->num > diff)
			{
				diff = b->num;
				target = b;
			}
			b = b->next;
		}
		if (diff == LONG_MIN)
			stack_a->target_node = find_biggest_num(stack_b);
		else
			stack_a->target_node = target;
		stack_a = stack_a->next;
	}
}

static void	set_cost(t_list *stack_a, t_list *stack_b)
{
	int	len_a;
	int	len_b;

	len_a = ft_lstsize(stack_a);
	len_b = ft_lstsize(stack_b);
	while (stack_a)
	{
		stack_a->cost = stack_a->index;
		if (stack_a->above_median == 0)
			stack_a->cost = len_a - (stack_a->index);
		if (stack_a->target_node->above_median == 1)
			stack_a->cost += stack_a->target_node->index;
		else
			stack_a->cost += len_b - (stack_a->target_node->index);
		stack_a = stack_a->next;
	}
}

static void	set_cheapest(t_list *stack_a)
{
	long	temp_cost;
	t_list	*cheapest_node;

	if (!stack_a)
		return ;
	temp_cost = LONG_MAX;
	while (stack_a)
	{
		if (stack_a->cost < temp_cost)
		{
			temp_cost = stack_a->cost;
			cheapest_node = stack_a;
		}
		stack_a = stack_a->next;
	}
	cheapest_node->cheapest = 1;
}

void	init_a(t_list *stack_a, t_list *stack_b)
{
	set_index(stack_a);
	set_index(stack_b);
	set_target(stack_a, stack_b);
	set_cost(stack_a, stack_b);
	set_cheapest(stack_a);
}
