/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_verifications.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 01:38:37 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/12 03:37:04 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	error_check(int	argc, char	**argv)
{
	t_list	*all_args;

	all_args = (t_list *) malloc(sizeof(t_list));
	while (argc)
	{
		ft_lstadd_front(all_args, (int)ft_atoi_int(argv[argc]));
		if (!all_args->content)
			return (1);
		argc--;
	}
}