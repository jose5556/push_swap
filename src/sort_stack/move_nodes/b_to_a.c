/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:04:32 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/06 07:12:52 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	move_b_to_a(t_list **stack_b, t_list **stack_a)
{
	t_list	*to_move;

	to_move = (*stack_b)->target_node;
	super_mini_sort(stack_a, to_move, 0);
	pa(stack_b, stack_a, 1);
}
