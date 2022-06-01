# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: medeana <medeana@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 16:31:50 by medeana           #+#    #+#              #
#    Updated: 2021/12/07 17:11:23 by medeana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = 			create_node.c \
				error.c \
				ft_atoi.c \
				initialization.c \
				is_sorted.c \
				max_o_min.c \
				push_swap.c \
				sort_big.c \
				sort_mini.c \
				sorted.c \
				sorted2.c \
				sorted3.c \
				sorted4.c \
				sorts.c \


HEADER = push_swap.h
CC = gcc

FLAGS = -Wall -Wextra -Werror

all: $(NAME) 

$(NAME):
	${CC} ${FLAGS} $(SRC) -o $(NAME)
%.o: %.		$(HEADER)
	${CC} ${FLAGS} $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re 

# SRC_FILES	= 	create_node.c \
# 				error.c \
# 				ft_atoi.c \
# 				initialization.c \
# 				is_sorted.c \
# 				max_o_min.c \
# 				push_swap.c \
# 				sort_big.c \
# 				sort_mini.c \
# 				sorted.c \
# 				sorted2.c \
# 				sorted3.c \
# 				sorted4.c \
# 				sorts.c \