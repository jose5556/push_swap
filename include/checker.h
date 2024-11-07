/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:04:08 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/07 10:59:37 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "./push_swap.h"

# define OK_MESSAGE "OK\n"
# define KO_MESSAGE "KO\n"

void			exit_checker_failure(t_list **a, t_list **b, char *command);
void			exit_checker_success(t_list **a);
int				check_command(char *command);
void			exec_command(char *command, t_list **stack_a, t_list **stack_b);

#endif