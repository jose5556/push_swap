/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:04:32 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/05 01:04:31 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	move_b_to_a(t_list **stack_b, t_list **stack_a)
{
	super_mini_sort(stack_a, (*stack_b)->target_node, 0);
	pa(stack_b, stack_a);
}
