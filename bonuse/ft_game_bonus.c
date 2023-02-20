/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:47:24 by rchmouk           #+#    #+#             */
/*   Updated: 2023/02/17 21:39:23 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_image(char *str, t_mlx p, int x, int y)
{
	p.mlx_img = mlx_xpm_file_to_image(p.mlx_ptr, str, &p.save_a, &p.save_b);
	mlx_put_image_to_window(p.mlx_ptr, p.mlx_win, p.mlx_img, y * 50, x * 50);
}

void	ft_fill_map(t_mlx p, int x, int y)
{
	while (p.map[x])
	{
		y = 0;
		while (p.map[x][y])
		{
			ft_image("./textuer/floor.xpm", p, x, y);
			if (p.map[x][y] == 'P')
				ft_image("./textuer/player.xpm", p, x, y);
			else if (p.map[x][y] == '1')
			{
				if (x == 0 || x == p.high - 1 || y == 0 || y == p.len - 1)
					ft_image("./textuer/wall2.xpm", p, x, y);
				else
					ft_image("./textuer/wall2.xpm", p, x, y);
			}
			else if (p.map[x][y] == 'C')
				ft_image("./textuer/coin1.xpm", p, x, y);
			else if (p.map[x][y] == 'E')
				ft_image("./textuer/exit.xpm", p, x, y);
			else if (p.map[x][y] == 'X')
				ft_image("./textuer/ennemi.xpm", p, x, y);
			y++;
		}
		x++;
	}
}

void	ft_game(char **map)
{
	t_mlx	p;
	int		x;
	int		y;

	x = 0;
	y = 0;
	p.map = map;
	p.len = ft_strlen(p.map[0]);
	p.high = ft_high(p.map);
	p.mlx_ptr = mlx_init();
	p.coins = ft_count_coins(map);
	p.moves = 0;
	p.mlx_win = mlx_new_window(p.mlx_ptr, p.len * 50, p.high * 50, "so_long");
	ft_fill_map(p, x, y);
	mlx_loop_hook(p.mlx_ptr, ft_anim, &p);
	mlx_hook(p.mlx_win, 2, 0, move_key, &p);
	mlx_hook(p.mlx_win, 17, 0, ft_close, &p);
	mlx_loop(p.mlx_ptr);
}
