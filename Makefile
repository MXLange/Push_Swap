# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/10 13:25:37 by msprenge          #+#    #+#              #
#    Updated: 2022/12/22 16:36:27 by msprenge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
PROGRAM = push_swap
MAIN = push_swap.c

SRC = $(shell find src/ -type f -name '*.c')
OBJ = $(SRC:%.c=%.o)
OBJ_MAIN = $(MAIN:%.c=%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rcs

all: $(NAME) $(PROGRAM)

$(NAME): $(OBJ)
		@make -C libft/
		@cp libft/libft.a $(NAME)
		@$(AR) $(NAME) $(OBJ)

$(PROGRAM): $(OBJ_MAIN)
			@cc -Wall -Wextra -Werror $(MAIN) $(NAME) -o $(PROGRAM)


clean:
		@make clean -C libft/
		@$(RM) $(OBJ) $(OBJ_MAIN)

fclean: clean
		@make fclean -C libft/
		@$(RM) $(NAME) $(PROGRAM)

re: fclean all

.SILENT:
