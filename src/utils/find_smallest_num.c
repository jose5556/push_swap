/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest_num.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 06:48:25 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/04 06:50:09 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_list	*find_smallest_num(t_list *stack)
{
	t_list	*temp;

	temp = stack;
	while (stack)
	{
		if (stack->num < temp->num)
			temp = stack;
		stack = stack->next;
	}
	return (temp);
}
