/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:59:08 by rchmouk           #+#    #+#             */
/*   Updated: 2023/02/14 06:54:06 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_image2(char *str, t_mlx *p, int x, int y)
{
	p->mlx_img = mlx_xpm_file_to_image(p->mlx_ptr, str, &p->save_a, &p->save_b);
	mlx_put_image_to_window(p->mlx_ptr, p->mlx_win, p->mlx_img, y * 50, x * 50);
}

void	ft_move_dir(char **map, t_mlx *p, int x, int y)
{
	int	x_move;
	int	y_move;

	x_move = 0;
	y_move = 0;
	p->dir == 'l' && y_move--;
	p->dir == 'r' && y_move++;
	p->dir == 'u' && x_move--;
	p->dir == 'd' && x_move++;
	x = ft_x(p->map, 'P');
	y = ft_y(p->map, 'P');
	map[x + x_move][y + y_move] == 'e' && ft_win();
	if (map[x + x_move][y + y_move] == '0' || map[x + x_move][y
		+ y_move] == 'C')
	{
		map[x + x_move][y + y_move] == 'C' && p->coins--;
		map[x][y] = '0';
		map[x + x_move][y + y_move] = 'P';
		ft_image2("./textuer/floor.xpm", p, x, y);
		ft_image2("./textuer/floor.xpm", p, x + x_move, y + y_move);
		ft_image2("./textuer/player.xpm", p, x + x_move, y + y_move);
		ft_printf("\033[0;34m%d move!\n", ++(p->moves));
		if (p->coins == 0)
			ft_open_door(map, p);
	}
}
