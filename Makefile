# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/12 01:54:02 by joseoliv          #+#    #+#              #
#    Updated: 2024/10/16 06:18:10 by joseoliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

CC = cc -g
CFLAGS = -Wall -Wextra -Werror

SRC =	src/errors_handler/error_verifications.c src/main.c src/utils/ft_atoi.c \
		src/errors_handler/exit.c
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