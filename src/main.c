/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 02:45:46 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/19 05:15:18 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char	*argv[])
{
	t_list	*stack_a;
	//t_list	*stack_b;

	stack_a = NULL;
	//stack_b = NULL;
	if (argc < 2)
		return (1);
	error_check(argc - 1, argv + 1, &stack_a);
	ft_printf("success\n");
	return (0);
}
