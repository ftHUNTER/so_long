# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 16:52:37 by rchmouk           #+#    #+#              #
#    Updated: 2023/02/14 07:43:44 by rchmouk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC = ft_bzero.c   ft_isascii.c ft_memchr.c  ft_memcpy.c  ft_memset.c  ft_strdup.c  ft_strlcpy.c ft_strncmp.c  ft_tolower.c ft_isalnum.c    ft_isdgit.c  \
ft_atoi.c    ft_isprint.c ft_memcmp.c  ft_memmove.c ft_strchr.c  ft_strlcat.c ft_strlen.c  ft_strnstr.c   ft_touper.c  ft_isalpha.c ft_strrchr.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_strtrim.c ft_split.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
