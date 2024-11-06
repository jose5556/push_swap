/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   super_mini_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 06:01:17 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/06 07:13:34 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	super_mini_sort(t_list **stack, t_list *to_move, int flag)
{
	while (*stack != to_move)
	{
		if (!flag)
		{
			if (to_move->above_median)
				ra(stack, 1);
			else
				rra(stack, 1);
		}
		else if (flag)
		{
			if (to_move->above_median)
				rb(stack, 1);
			else
				rrb(stack, 1);
		}
	}
}
