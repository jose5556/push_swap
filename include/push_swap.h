/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 01:40:06 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/12 05:08:00 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

#define ERROR_MESSAGE "Error\n"

void	error_check(int	argc, char **argv, t_list **stack_a, t_list **stack_b);
void	exit_program(t_list **stack_a, t_list **stack_b);

#endif