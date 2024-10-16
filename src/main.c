/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 02:45:46 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/16 05:48:09 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char	*argv[])
{
	t_list	*stack_a;
	//t_list	*stack_b;

	stack_a = NULL;
	//stack_b = NULL;
	if (argc < 3)
		return (1);
	error_check(argc, argv, &stack_a);
	ft_printf("success\n");
	return (0);
}
