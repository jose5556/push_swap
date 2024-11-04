/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_biggest_num.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 04:33:18 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/04 05:39:20 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_list *find_biggest_num(t_list *stack)
{
	t_list *temp;

	temp = stack;
	while(stack)
	{
		if (stack->num > temp->num)
			temp = stack;
		stack = stack->next;
	}
	return (temp);
}
