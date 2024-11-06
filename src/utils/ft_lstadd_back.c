/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 05:10:56 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/06 02:34:38 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_lstadd_back(t_list **lst, int content)
{
	t_list	*new_node;
	t_list	*last;

	if (!lst)
		return ;
	new_node = ft_newlst(content);
	if (!new_node)
		return ;
	if (!(*lst))
		*lst = new_node;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new_node;
		new_node->previous = last;
	}
}
