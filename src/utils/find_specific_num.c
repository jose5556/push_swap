/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_specific_num.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 04:33:18 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/06 02:21:05 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_list	*find_biggest_num(t_list *stack)
{
	t_list	*biggest;

	if (!stack)
		return (NULL);
	biggest = stack;
	while (stack)
	{
		if (stack->num > biggest->num)
			biggest = stack;
		stack = stack->next;
	}
	return (biggest);
}

t_list	*find_smallest_num(t_list *stack)
{
	t_list	*smallest;

	if (!stack)
		return (NULL);
	smallest = stack;
	while (stack)
	{
		if (stack->num < smallest->num)
			smallest = stack;
		stack = stack->next;
	}
	return (smallest);
}
