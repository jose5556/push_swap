/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 03:34:34 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/04 06:52:41 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"


static void	set_target(t_list **stack_a, t_list **stack_b)
{
	t_list	*target;
	t_list	*b;
	long	diff;

	while (*stack_a)
	{
		diff = LONG_MIN;
		b = *stack_b;
		while (b)
		{
			if ((*stack_a) > b->num && (*stack_a)->num - b->num < diff)
			{
				target = b;
				diff = (*stack_a)->num - b->num;
			}
			b = b->next;
		}
		if (diff = LONG_MIN)
			target = find_biggest_num(*stack_b);
		else
			(*stack_a)->target_node = target;
		*stack_a = (*stack_a)->next;
	}
}

static void	set_cost(t_list **stack_a, t_list **stack_b)
{
	int	len_a;
	int	len_b;

	len_a = ft_lstsize(*stack_a);
	len_b = ft_lstsize(*stack_b);
	while (*stack_a)
	{
		(*stack_a)->cost = (*stack_a)->index;
		if (!((*stack_a)->above_median))
			(*stack_a)->cost -= len_a;
		if ((*stack_a)->target_node->above_median)
			(*stack_a)->cost += (*stack_a)->target_node->index;
		else
			(*stack_a)->cost += ((*stack_a)->target_node->index - len_b);
		*stack_a = (*stack_a)->next;
	}
}

static void set_cheapest(t_list **stack_a)
{
	int		temp_cost;
	t_list	*cheapest_node;

	while (*stack_a)
	{
		temp_cost = LONG_MAX;
		if ((*stack_a)->cost < temp_cost)
		{
			temp_cost = (*stack_a)->cost;
			cheapest_node = *stack_a;
		}	
		*stack_a = (*stack_a)->next;
	}
	cheapest_node->cheapest = 1;
}

void	init_a(t_list **stack_a, t_list **stack_b)
{
	set_index(stack_a);
	set_index(stack_b);
	set_target(stack_a, stack_b);
	set_cost(stack_a, stack_b);
	set_cheapest(stack_a);
}
