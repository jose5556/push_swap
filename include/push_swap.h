/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 01:40:06 by joseoliv          #+#    #+#             */
/*   Updated: 2024/11/07 14:10:00 by joseoliv         ###   ########.fr       */
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
void	init_a(t_list *stack_a, t_list *stack_b);
void	init_b(t_list *stack_b, t_list *stack_a);
void	move_a_to_b(t_list **stack_a, t_list **stack_b);
void	move_b_to_a(t_list **stack_b, t_list **stack_a);
void	ra(t_list **stack_a, int flag);
void	rb(t_list **stack_b, int flag);
void	rr(t_list **stack_a, t_list **stack_b, int flag);
void	rra(t_list **stack_a, int flag);
void	rrb(t_list **stack_b, int flag);
void	rrr(t_list **stack_a, t_list **stack_b, int flag);
void	pa(t_list **stack_b, t_list **stack_a, int flag);
void	pb(t_list **stack_a, t_list **stack_b, int flag);
void	sa(t_list **stack_a, int flag);
void	sb(t_list **stack_b, int flag);
void	ss(t_list **stack_a, t_list **stack_b, int flag);
void	sort_three(t_list **stack);
void	sort_stack(t_list **stack_a, t_list **stack_b);
void	super_mini_sort(t_list **stack, t_list *to_move, int flag);
void	ft_lstadd_back(t_list **lst, int content);
void	ft_lstclear(t_list **lst);
t_list	*ft_newlst(int content);
int		ft_lstsize(t_list *lst);
void	ft_lstprint(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*find_biggest_num(t_list *stack);
t_list	*find_smallest_num(t_list *stack);
void	set_index(t_list *stack);
int		is_sorted(t_list *stack_a);
void	ft_atoi(char **argv, int argc, long result, int check_value);

#endif