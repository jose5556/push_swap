/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 02:45:46 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/01 04:46:01 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char	*argv[])
{
	t_list	*stack_a;
	//t_list	*stack_b;
	int		size;

	stack_a = NULL;
	//stack_b = NULL;
	if (argc < 2)
		return (1);
	error_check(argc - 1, argv + 1, &stack_a);
	if (!is_sorted(stack_a))
	{
		size = ft_lstsize(stack_a);
		if (size == 2)
			ra(&stack_a);
		else if (size == 3)
			sort_three(&stack_a);
	}
	ft_lstprint(stack_a);
	ft_lstclear(&stack_a);
	//ft_lstclear(&stack_b);
	return (0);
}

//write (1, "l", 1);

/* 		
		else if (size == 3)
			//TODO
		else
			//TODO */