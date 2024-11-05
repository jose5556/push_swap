/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_aboveline.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 03:52:46 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/05 03:41:32 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	set_index(t_list *stack)
{
	int	i;
	int	above_medium;

	i = 0;
	if (!stack)
		return ;
	above_medium = ft_lstsize(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= above_medium)
			stack->above_median = 1;
		else
			stack->above_median = 0;
		stack = stack->next;
		i++;
	}
}
