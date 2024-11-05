/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:15:22 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/05 03:57:08 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	is_sorted(t_list *stack_a)
{
	if (!stack_a)
		return (0);
	while (stack_a->next)
	{
		if (stack_a->num > stack_a->next->num)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
