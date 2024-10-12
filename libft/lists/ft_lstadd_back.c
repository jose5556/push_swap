/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 05:10:56 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/12 01:47:12 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, void *content)
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
		while (temp->next != *lst)
			temp = temp->next;
		temp->next = new_node;
		new_node->next = *lst;
	}
}
