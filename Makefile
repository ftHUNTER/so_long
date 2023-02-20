# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/04 16:48:18 by rchmouk           #+#    #+#              #
#    Updated: 2023/02/17 21:37:11 by rchmouk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
NAMEBONUS = so_long_bonus
LIBFT= libft/libft.a
FT_PRINTF = ft_printf/ft_printf.a
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = so_long.c ft_check_map1.c ft_check_map2.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c flood_fill.c map.c \
ft_game.c ft_moves.c ft_game_util.c ft_moves_util.c

SRCBONUS = bonuse/so_long_bonus.c bonuse/ft_check_map1_bonus.c bonuse/ft_check_map2_bonus.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c bonuse/flood_fill_bonus.c bonuse/map_bonus.c \
bonuse/ft_game_bonus.c bonuse/ft_moves_bonus.c bonuse/ft_game_util_bonus.c bonuse/ft_moves_util_bonus.c bonuse/ft_anim_bonus.c bonuse/anime_player_bonus.c

OBJ = $(SRC:.c=.o)

OBJBONUS = $(SRCBONUS:.c=.o)

all: $(NAME) $(LIBFT) $(FT_PRINTF)

bonus:	$(NAMEBONUS) $(LIBFT) $(FT_PRINTF)
	
$(NAME): $(OBJ) $(LIBFT) $(FT_PRINTF)
	cc -lmlx -framework OpenGL -framework AppKit $(CFLAGS) $(SRC) $(LIBFT) $(FT_PRINTF) -o $(NAME)

$(NAMEBONUS): $(OBJBONUS) $(LIBFT) $(FT_PRINTF)
	cc -lmlx -framework OpenGL -framework AppKit $(CFLAGS) $(SRCBONUS) $(LIBFT) $(FT_PRINTF) -o $(NAMEBONUS)

$(LIBFT):
	make all -C libft

$(FT_PRINTF):
	make all -C ft_printf

clean :
	$(RM) $(OBJ) $(OBJBONUS)
	make clean -C libft 
	make clean -C ft_printf

fclean : clean
	$(RM) $(NAME) $(NAMEBONUS)
	make fclean -C libft 
	make fclean -C ft_printf
		
re: fclean all

