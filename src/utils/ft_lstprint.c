/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 02:25:52 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/30 00:49:34 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_lstprint(t_list *lst)
{
	while (lst)
	{
		ft_printf("%d ", lst->num);
		lst = lst->next;
	}
}
