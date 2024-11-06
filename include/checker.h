/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:04:08 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/06 07:46:27 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "./push_swap.h"

# define OK_MESSAGE "OK\n"
# define KO "KO\n"

typedef struct s_simple_list
{
	char					*name;
	struct s_simple_list	*next;
}	t_simple_list;

t_simple_list	*ft_simple_newlst(char *content);
void			ft_simple_lstadd_back(t_simple_list **lst, char *content);
void			ft_simple_lstclear(t_simple_list **lst);
t_simple_list	*ft_simple_lstlast(t_simple_list *lst);
void			exit_checker(t_list **a, t_list **b, t_simple_list **lst, char *command);
int				check_command(char *command, t_simple_list *lst);
void			exec_command(char *command, t_list **stack_a, t_list **stack_b);
void			init_commands_name(t_simple_list **lst);

#endif