/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 05:38:20 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/07 14:30:46 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_atoi(char **argv, int argc, long result, int check_value)
{
	long	i;
	long	j;

	j = 0;
	while (argv[j])
	{
		i = 0;
		result = 0;
		if (argv[j][i] == '-')
		{
			check_value *= -1;
			i++;
		}
		else if (argv[j][i] == '+')
			i++;
		while (argv[j][i] >= 48 && argv[j][i] <= 57)
		{
			result = result * 10 + (argv[j][i] - '0');
			if (result * check_value > INT_MAX
				|| result * check_value < INT_MIN)
				exit_program(argc, argv);
			i++;
		}
		j++;
	}
}
