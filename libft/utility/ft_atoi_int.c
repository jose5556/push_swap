/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:28:53 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/12 03:02:00 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi_int(const char *nptr)
{
	int	i;
	int	result;
	int	check_value;

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
	while (nptr[i])
	{
		if (!ft_isdigit(nptr[i]))
			return (NULL);
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * check_value);
}

/* int	main(void)
{
	ft_atoi("  	-1234ppp");
	printf("%d\n", atoi("       -1234ppp"));
} */