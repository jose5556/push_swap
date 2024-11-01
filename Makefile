# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/12 01:54:02 by joseoliv          #+#    #+#              #
#    Updated: 2024/11/01 03:26:48 by joseoliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc -g
CFLAGS = -Wall -Wextra -Werror

SRC =	src/errors_handler/error_verifications.c src/main.c src/utils/ft_atoi.c \
		src/errors_handler/exit.c src/instructions/rotate.c src/stack_utils/ft_lstadd_back.c \
		src/stack_utils/ft_lstclear.c src/stack_utils/ft_lstprint.c src/stack_utils/ft_lstsize.c \
		src/stack_utils/ft_newlst.c src/utils/is_sorted.c src/stack_utils/ft_lstlast.c \
		src/instructions/reverse_rotate.c src/instructions/push.c src/instructions/swap.c
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) -o $@ $(OBJ) $(LIBFT)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@make -C $(LIBFT_DIR) -s

clean:
	@rm -f $(OBJ)
	@make clean -C $(LIBFT_DIR) -s

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR) -s

re: fclean all