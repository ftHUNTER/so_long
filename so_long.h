/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 07:22:55 by rchmouk           #+#    #+#             */
/*   Updated: 2023/02/17 22:22:39 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "ft_printf/ft_printf.h"
# include "get_next_line/get_next_line.h"
# include "libft/libft.h"
# include <fcntl.h>
# include <math.h>
# include <mlx.h>
# include <stdio.h>

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
void		ft_open_door(char **map, t_mlx *p);
void		ft_image2(char *str, t_mlx *p, int x, int y);
void		ft_move_dir(char **map, t_mlx *p, int x, int y);
void		ft_check_path_2(char **map);
void		ft_flood_fill_2(char **map, int p_x, int p_y);

#endif