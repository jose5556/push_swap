/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 02:25:52 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/16 04:44:50 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstprint(t_list *lst)
{
	while(lst)
	{
		ft_printf("%d\n", lst->content);
		lst = lst->next;
	}
}
