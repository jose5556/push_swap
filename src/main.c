/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 02:45:46 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/16 02:48:57 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char	*argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = (t_list *) malloc(sizeof(t_list));
	stack_b = (t_list *) malloc(sizeof(t_list));
	if (argc < 3)
		return (1);
	error_check(argc, argv, &stack_a, &stack_b);
	ft_printf("success");
	return (0);
}