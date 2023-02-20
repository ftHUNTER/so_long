/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 00:08:03 by rchmouk           #+#    #+#             */
/*   Updated: 2023/02/14 07:13:16 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_x(char **map, char c)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (map[x])
	{
		y = 0;
		while (map[x][y])
		{
			if (map[x][y] == c)
				return (x);
			y++;
		}
		x++;
	}
	return (0);
}

int	ft_y(char **map, char c)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (map[x])
	{
		y = 0;
		while (map[x][y])
		{
			if (map[x][y] == c)
				return (y);
			y++;
		}
		x++;
	}
	return (0);
}

int	ft_win(void)
{
	ft_printf("\033[0;32m<<<<<<YOU WIN>>>>>>");
	exit(1);
	return (1);
}

void	ft_open_door(char **map, t_mlx *p)
{
	p->coins--;
	ft_image2("./textuer/floor.xpm", p, ft_x(map, 'E'), ft_y(map, 'E'));
	ft_image2("./textuer/out.xpm", p, ft_x(map, 'E'), ft_y(map, 'E'));
	map[ft_x(map, 'E')][ft_y(map, 'E')] = 'e';
}
