/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:06:14 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/07 11:06:27 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	exit_checker_failure(t_list **a, t_list **b, char *command)
{
	free(command);
	ft_lstclear(a);
	ft_lstclear(b);
	ft_printf("%s", KO_MESSAGE);
	exit(EXIT_FAILURE);
}

void	exit_checker_success(t_list **a)
{
	ft_lstclear(a);
	ft_printf("%s", OK_MESSAGE);
	exit(EXIT_SUCCESS);
}
