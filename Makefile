# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/10 13:25:37 by msprenge          #+#    #+#              #
#    Updated: 2022/12/22 20:01:26 by msprenge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

PROGRAM = push_swap
CHECKER = checker

MAIN = push_swap.c
MAIN_CHECKER = checker.c

SRC = $(shell find src/ -type f -name '*.c')

OBJ = $(SRC:%.c=%.o)

OBJ_MAIN = $(MAIN:%.c=%.o)
OBJ_MAIN_CHECKER = $(MAIN_CHECKER:%.c=%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rcs

all: $(NAME) $(PROGRAM)

$(NAME): $(OBJ) $(OBJ_CHECKER)
		@make -C libft/
		@cp libft/libft.a $(NAME)
		@$(AR) $(NAME) $(OBJ) $(OBJ_CHECKER)

$(PROGRAM): $(OBJ_MAIN)
			@cc -Wall -Wextra -Werror $(MAIN) $(NAME) -o $(PROGRAM)

bonus: $(NAME) $(CHECKER)

$(CHECKER): $(OBJ_MAIN_CHECEKR)
			@cc -Wall -Wextra -Werror $(MAIN_CHECKER) $(NAME) -o $(CHECKER)

clean:
		@make clean -C libft/
		@$(RM) $(OBJ) $(OBJ_MAIN)

fclean: clean
		@make fclean -C libft/
		@$(RM) $(NAME) $(PROGRAM)

re: fclean all

#.SILENT:
