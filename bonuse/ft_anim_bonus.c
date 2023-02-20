/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_anim_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:12:05 by rchmouk           #+#    #+#             */
/*   Updated: 2023/02/17 21:36:27 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_do_anim_ennemi(int x, int y, int time, t_mlx *p)
{
	if (time == 1)
	{
		ft_image2("./textuer/floor.xpm", p, x, y);
		ft_image2("./textuer/ball1.xpm", p, x, y);
	}
	else if (time == 1000)
	{
		ft_image2("./textuer/floor.xpm", p, x, y);
		ft_image2("./textuer/ball2.xpm", p, x, y);
	}
	else if (time == 2000)
	{
		ft_image2("./textuer/floor.xpm", p, x, y);
		ft_image2("./textuer/ball3.xpm", p, x, y);
	}
	else if (time == 3000)
	{
		ft_image2("./textuer/floor.xpm", p, x, y);
		ft_image2("./textuer/ball4.xpm", p, x, y);
	}
}

void	ft_anim_ennemi(int time, t_mlx *p)
{
	int	i;
	int	j;

	i = 0;
	while (p->map[i])
	{
		j = 0;
		while (p->map[i][j])
		{
			if (p->map[i][j] == 'X')
				ft_do_anim_ennemi(i, j, time, p);
			j++;
		}
		i++;
	}
}

void	ft_do_anim(int x, int y, int time, t_mlx *p)
{
	if (time == 1)
	{
		ft_image2("./textuer/floor.xpm", p, x, y);
		ft_image2("./textuer/coin1.xpm", p, x, y);
	}
	else if (time == 1000)
	{
		ft_image2("./textuer/floor.xpm", p, x, y);
		ft_image2("./textuer/coin3.xpm", p, x, y);
	}
	else if (time == 2000)
	{
		ft_image2("./textuer/floor.xpm", p, x, y);
		ft_image2("./textuer/coin4.xpm", p, x, y);
	}
	else if (time == 3000)
	{
		ft_image2("./textuer/floor.xpm", p, x, y);
		ft_image2("./textuer/coin5.xpm", p, x, y);
	}
}

void	ft_anim_player(t_mlx *p)
{
	static int	time;
	int			i;
	int			j;

	i = 0;
	time++;
	while (p->map[i])
	{
		j = 0;
		while (p->map[i][j])
		{
			if (p->map[i][j] == 'P')
				ft_do_anim_player(i, j, time, p);
			j++;
		}
		i++;
	}
	if (time >= 8000)
		time = 0;
}

int	ft_anim(t_mlx *p)
{
	int			i;
	int			j;
	static int	time;

	i = 0;
	time++;
	while (p->map[i])
	{
		j = 0;
		while (p->map[i][j])
		{
			if (p->map[i][j] == 'C')
				ft_do_anim(i, j, time, p);
			j++;
		}
		i++;
	}
	ft_anim_ennemi(time, p);
	ft_anim_player(p);
	if (time >= 3000)
		time = 0;
	return (0);
}
