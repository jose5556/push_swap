/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 05:38:20 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/16 06:16:37 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_atoi(const char *nptr)
{
	long	i;
	long	result;
	long	check_value;

	result = 0;
	check_value = 1;
	i = 0;
	if (nptr[i] == '-')
	{
		check_value *= -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = result * 10 + (nptr[i] - '0');
		if (result * check_value > INT_MAX
			|| result * check_value < INT_MIN)
			exit_program();
		i++;
	}
	return (result * check_value);
}
