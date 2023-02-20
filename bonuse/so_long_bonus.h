/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 07:22:55 by rchmouk           #+#    #+#             */
/*   Updated: 2023/02/17 21:36:15 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include "../ft_printf/ft_printf.h"
# include "../get_next_line/get_next_line.h"
# include "../libft/libft.h"
# include <fcntl.h>
# include <math.h>
# include <mlx.h>
# include <stdio.h>

# define RED 0xFF0000
# define BLACK 0x000000
# define WHITE 0xFFFFFF
# define GREEN 0x00FF00
# define BLUE 0x0000FF
# define YELLOW 0xFFFF00
# define CYAN 0x00FFFF
# define MAGENTA 0xFF00FF

typedef struct need_hook
{
	int		len;
	int		high;
	int		coins;
	void	*mlx_ptr;
	void	*mlx_win;
	void	*mlx_img;
	char	**map;
	int		save_a;
	int		save_b;
	int		dir;
	int		moves;
	int		p_x;
	int		p_y;
	int		time;
}			t_mlx;

char		**ft_check_map1(char *str);
void		ft_check_map2(char **map);
void		ft_error_exit(char *str);
void		ft_flood_fill(char **map, int p_x, int p_y);
void		ft_map(char **av);
void		ft_game(char **map);
void		ft_image(char *str, t_mlx p, int x, int y);
int			ft_count_coins(char **map);
int			ft_high(char **map);
int			ft_close(t_mlx *p);
int			move_key(int move, t_mlx *p);
int			ft_x(char **map, char c);
int			ft_y(char **map, char c);
int			ft_win(void);
int			ft_open_door(char **map, t_mlx *p);
void		ft_image2(char *str, t_mlx *p, int x, int y);
void		ft_move_dir(char **map, t_mlx *p, int x, int y);
void		ft_flood_fill_2(char **map, int p_x, int p_y);
void		ft_check_path_2(char **map);
int			ft_anim(t_mlx *p);
void		ft_do_anim(int x, int y, int time, t_mlx *p);
void		ft_anim_ennemi(int time, t_mlx *p);
void		ft_do_anim_ennemi(int x, int y, int time, t_mlx *p);
void		ft_do_anim_player(int x, int y, int time, t_mlx *p);

#endif