# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lowatell <lowatell@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/19 20:26:03 by lowatell          #+#    #+#              #
#    Updated: 2024/07/21 14:05:52 by lowatell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_dict_to_str.c srcs/ft_arr_to_struct.c srcs/ft_split.c srcs/rush02.c srcs/ft_strlen.c srcs/ft_putchar.c srcs/ft_putstr.c 

DICT = ./dicts/

INCS_DIR = ./includes/

NAME = rush02

OBJ = $(SRCS:.c=.o)

all: $(NAME)

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INCS_DIR)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY:
	all clean fclean re
