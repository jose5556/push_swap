/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 01:40:06 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/19 06:28:48 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

# define ERROR_MESSAGE "Error\n"

void	error_check(int argc, char **argv, t_list **stack_a);
void	exit_program(int flag, char **args);
void	free_args(char **args);
void	ft_atoi(char **argv, int argc, long result, int check_value);

#endif