# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 07:35:58 by rchmouk           #+#    #+#              #
#    Updated: 2023/02/05 21:18:00 by rchmouk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME=ft_printf.a
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC = ft_printf_1.c ft_printf_2.c  ft_printf.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
