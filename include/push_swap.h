/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 01:40:06 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/04 04:25:59 by joseoliv         ###   ########.fr       */
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

void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);

void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void 	rrr(t_list **stack_a, t_list **stack_b);

void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);

void	sa(t_list **stack_a);
void	sb(t_list **stack_b);

void	sort_three(t_list **stack);

void	ft_lstadd_back(t_list **lst, int content);
void	ft_lstclear(t_list **lst);
t_list	*ft_newlst(int content);
size_t	ft_lstsize(t_list *lst);
void	ft_lstprint(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*find_biggest_num(t_list *stack);

#endif