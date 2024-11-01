/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 04:17:47 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/01 04:44:37 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_three(t_list **stack)
{
	t_list	*biggest_num;

	biggest_num = find_biggest_num(*stack);
	if (biggest_num == *stack)
		ra(stack);
	else if (biggest_num == (*stack)->next)
		rra(stack);
	if ((*stack)->num > (*stack)->next->num)
		sa(stack);
}
