/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 06:14:44 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/11 14:30:15 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	free_args(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		free(args[i++]);
	free(args);
}

void	exit_program(int flag, char **args)
{
	if (flag == 1)
		free_args(args);
	ft_printf("%s", ERROR_MESSAGE);
	exit(EXIT_FAILURE);
}

void	handle_one_num_exit(int argc, char **args)
{
	if (argc == 1)
		free_args(args);
	exit (EXIT_SUCCESS);
}
