# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 15:16:14 by msprenge          #+#    #+#              #
#    Updated: 2022/12/13 13:31:22 by msprenge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(shell find . -type f -name '*.c')

CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

OBJ = $(SRC:%.c=%.o)
BONUS_OBJ = $(BONUS_SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
		@$(AR) $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
		@$(AR) $(NAME) $(BONUS_OBJ) $(OBJ)

clean:
		@$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
		@$(RM) $(NAME)

re: fclean all
