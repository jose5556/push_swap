/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 03:34:34 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/05 06:13:13 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

static void	set_target(t_list *a, t_list *b)
{
	t_list	*current_b;
	t_list	*target_node;
	long	best_match_index;

	while (a)
	{
		best_match_index = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->num < a->num 
				&& current_b->num > best_match_index)
			{
				best_match_index = current_b->num;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_match_index == LONG_MIN)
			a->target_node = find_biggest_num(b);
		else
			a->target_node = target_node;
		a = a->next;
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
		if (!(stack_a->above_median))
			stack_a->cost -= len_a;
		if (stack_a->target_node->above_median)
			stack_a->cost += stack_a->target_node->index;
		else
			stack_a->cost += (stack_a->target_node->index - len_b);
		stack_a = stack_a->next;
	}
}

static void	set_cheapest(t_list *stack_a)
{
	long	temp_cost;
	t_list	*cheapest_node;

	while (stack_a)
	{
		temp_cost = LONG_MAX;
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
