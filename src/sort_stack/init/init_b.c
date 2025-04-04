/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:43:32 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/06 04:45:25 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

static void	set_target(t_list *stack_a, t_list *stack_b)
{
	t_list	*a;
	t_list	*target;
	long	diff;

	while (stack_b)
	{
		diff = LONG_MAX;
		a = stack_a;
		while (a)
		{
			if (a->num > stack_b->num
				&& a->num < diff)
			{
				diff = a->num;
				target = a;
			}
			a = a->next;
		}
		if (diff == LONG_MAX)
			stack_b->target_node = find_smallest_num(stack_a);
		else
			stack_b->target_node = target;
		stack_b = stack_b->next;
	}
}

void	init_b(t_list *stack_b, t_list *stack_a)
{
	set_index(stack_a);
	set_index(stack_b);
	set_target(stack_a, stack_b);
}
