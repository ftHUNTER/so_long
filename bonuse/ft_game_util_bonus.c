/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_util_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 23:57:49 by rchmouk           #+#    #+#             */
/*   Updated: 2023/02/16 00:31:27 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_count_coins(char **map)
{
	int	x;
	int	y;
	int	c;

	x = 0;
	c = 0;
	while (map[x])
	{
		y = 0;
		while (map[x][y])
		{
			if (map[x][y] == 'C')
				c++;
			y++;
		}
		x++;
	}
	return (c);
}

int	ft_high(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

int	ft_close(t_mlx *p)
{
	mlx_destroy_window(p->mlx_ptr, p->mlx_win);
	exit(0);
}

int	move_key(int m, t_mlx *p)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (m == 53)
		exit(0);
	if (m == 0 || m == 123)
		p->dir = 'l';
	else if (m == 2 || m == 124)
		p->dir = 'r';
	else if (m == 13 || m == 126)
		p->dir = 'u';
	else if (m == 1 || m == 125)
		p->dir = 'd';
	if (m == 0 || m == 123 || m == 2 || m == 124 || m == 13 || m == 126
		|| m == 1 || m == 125)
		ft_move_dir(p->map, p, i, j);
	return (0);
}
