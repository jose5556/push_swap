/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_list_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 06:07:27 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/06 06:14:37 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/checker.h"

t_simple_list	*ft_new_simple_lst(char *content)
{
	t_simple_list *new_node;

	new_node = (t_list *) malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->name = content;
	new_node->next = NULL;
	return (new_node);
}

void	ft_simple_lstadd_back(t_simple_list **lst, char *content)
{
	t_simple_list	*new_node;
	t_simple_list	*last;

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
	}
}

void	ft_simple_lstclear(t_simple_list **lst)
{
	t_simple_list	*temp;
	t_simple_list	*next_node;

	if (!(*lst))
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