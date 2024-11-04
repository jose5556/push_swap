/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 03:03:22 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/04 05:04:14 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size-- > 3 && !is_sorted(*stack_a))
		pb(stack_a, stack_b);
	if (size-- > 3 && !is_sorted(*stack_a))
		pb(stack_a, stack_b);
	while (size-- > 3 && !is_sorted(*stack_a))
	{
		init_a(stack_a, stack_b);
		move_a_to_b(stack_a, stack_b);
	}
}
