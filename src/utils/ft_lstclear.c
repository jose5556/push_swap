/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 05:11:23 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/07 10:47:20 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*temp;
	t_list	*next_node;

	if (!lst || !(*lst))
		return ;
	temp = *lst;
	while (temp)
	{
		next_node = temp->next;
		free(temp);
		temp = next_node;
	}
	*lst = NULL;
}
