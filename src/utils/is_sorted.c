/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:15:22 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/29 23:19:37 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	is_sorted(t_list *stack_a)
{
	t_list	*temp;

	while (stack_a->next)
	{
		temp = stack_a->next;
		if (stack_a->num > temp->num)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}