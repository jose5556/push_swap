/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 05:10:56 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/29 22:14:52 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_lstadd_back(t_list **lst, int content)
{
	t_list	*new_node;
	t_list	*temp;

	new_node = ft_newlst(content);
	if (!new_node)
		return ;
	if (!(*lst))
		*lst = new_node;
	else
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		new_node->previous = temp;
		temp->next = new_node;
	}
}
