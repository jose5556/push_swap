/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 01:40:06 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/29 22:20:31 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

# define ERROR_MESSAGE "Error\n"

typedef struct s_list
{
	int				num;
	int				index;
	int				cost;
	int				above_median;
	int				cheapest;
	struct s_list	*next;
	struct s_list	*previous;
	struct s_list	*target_node;
}	t_list;

void	error_check(int argc, char **argv, t_list **stack_a);
void	exit_program(int flag, char **args);
void	free_args(char **args);
void	ft_atoi(char **argv, int argc, long result, int check_value);
int		is_sorted(t_list *stack_a);


void	ft_lstadd_back(t_list **lst, int content);
void	ft_lstclear(t_list **lst);
t_list	*ft_newlst(int content);
size_t	ft_lstsize(t_list *lst);
void	ft_lstprint(t_list *lst);
#endif