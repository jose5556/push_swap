/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:43:32 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/04 06:57:45 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

static void	set_target_b(t_list *a, t_list *b)
{
	t_list	*current_a;
	t_list	*target_node;
	long	best_match_index;

	while (b)
	{
		best_match_index = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->num > b->num 
				&& current_a->num < best_match_index)
			{
				best_match_index = current_a->num;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (best_match_index == LONG_MAX)
			b->target_node = find_smallest_num(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}


void	init_b(t_list **stack_b, t_list **stack_a)
{
	set_index(stack_a);
	set_index(stack_b);
	set_target(stack_b, stack_a);
}