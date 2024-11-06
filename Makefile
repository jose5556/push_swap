# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/12 01:54:02 by joseoliv          #+#    #+#              #
#    Updated: 2024/11/06 08:01:20 by joseoliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CHECKER = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =	src/main.c src/errors_handler/error_verifications.c src/errors_handler/exit.c \
		src/instructions/push.c src/instructions/reverse_rotate.c src/instructions/rotate.c \
		src/instructions/swap.c \
		src/utils/find_specific_num.c src/utils/ft_atoi.c \
		src/utils/ft_lstadd_back.c src/utils/ft_lstclear.c src/utils/ft_lstlast.c \
		src/utils/ft_lstprint.c src/utils/ft_lstsize.c src/utils/ft_newlst.c \
		src/utils/index_aboveline.c src/utils/is_sorted.c \
		src/sort_stack/init/init_a.c src/sort_stack/init/init_b.c \
		src/sort_stack/move_nodes/a_to_b.c src/sort_stack/move_nodes/b_to_a.c \
		src/sort_stack/sort_large_stack.c src/sort_stack/sort_three.c src/sort_stack/super_mini_sort.c

CHECKER_SRC =	src_bonus/checker.c src_bonus/utils/simple_list_utils.c \
				src/utils/ft_lstclear.c src/utils/ft_lstadd_back.c src/utils/ft_atoi.c \
				src/utils/ft_lstlast.c src/utils/ft_newlst.c src/utils/ft_lstsize.c src/utils/is_sorted.c \
				src/instructions/push.c src/instructions/reverse_rotate.c src/instructions/rotate.c \
				src/instructions/swap.c \
				src/errors_handler/error_verifications.c src/errors_handler/exit.c \

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a 

OBJ = $(SRC:.c=.o)
CHECKER_OBJ = $(CHECKER_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) -o $@ $(OBJ) $(LIBFT)

bonus: $(CHECKER)

$(CHECKER): $(CHECKER_OBJ) $(LIBFT)
	@$(CC) -o $@ $(CHECKER_OBJ) $(LIBFT)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@make -C $(LIBFT_DIR) -s

clean:
	@rm -f $(OBJ) $(CHECKER_OBJ)
	@make clean -C $(LIBFT_DIR) -s

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR) -s

re: fclean all