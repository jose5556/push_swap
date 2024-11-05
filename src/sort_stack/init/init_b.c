/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:43:32 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/05 06:06:42 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

static void	set_target(t_list *a, t_list *b) //Define a function that sets for the current `a` node, its target node from stack `a`
{
	t_list	*current_a; //To store the pointer to the current `a` node
	t_list	*target_node; //To store the pointer of the target node for `b` node
	long			best_match_index; //To store the "closest bigger" number so far

	while (b)
	{
		best_match_index = LONG_MAX; //Set the current best match to the max long
		current_a = a; //Assign the pointer to point to the current `a` node
		while (current_a) //While the pointer is not set to NULL
		{
			if (current_a->num > b->num 
				&& current_a->num < best_match_index) //Check if the `a` node's value is bigger than `b` node, && smaller than the "closest bigger" so far
			{
				best_match_index = current_a->num; //Set the best match as the value in the current `a` node
				target_node = current_a; //Set `b` node's target node pointer to point to the current `a` node
			}
			current_a = current_a->next; //Move to the next `a` node for processing
		}
		if (best_match_index == LONG_MAX) //If the best match value has not changed
			b->target_node = find_smallest_num(a); //Set `b` node's target node pointer to point to the smallest number in stack `a`
		else
			b->target_node = target_node; //If the best match value has been updated, then we have a target node for the current `b` node
		b = b->next; //Move to the next `b` node for processing
	}
}

void	init_b(t_list *stack_b, t_list *stack_a)
{
	set_index(stack_a);
	set_index(stack_b);
	set_target(stack_a, stack_b);
}
