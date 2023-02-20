/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:00:35 by rchmouk           #+#    #+#             */
/*   Updated: 2023/02/16 10:53:55 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_flood_fill(char **map, int p_x, int p_y)
{
	if (map[p_y][p_x] == '1' || map[p_y][p_x] == 'E')
		return ;
	else
		map[p_y][p_x] = '1';
	ft_flood_fill(map, p_x + 1, p_y);
	ft_flood_fill(map, p_x - 1, p_y);
	ft_flood_fill(map, p_x, p_y + 1);
	ft_flood_fill(map, p_x, p_y - 1);
}

void	ft_flood_fill_2(char **map, int p_x, int p_y)
{
	if (map[p_y][p_x] == '1' || map[p_y][p_x] == 'X')
		return ;
	else
		map[p_y][p_x] = '1';
	ft_flood_fill_2(map, p_x + 1, p_y);
	ft_flood_fill_2(map, p_x - 1, p_y);
	ft_flood_fill_2(map, p_x, p_y + 1);
	ft_flood_fill_2(map, p_x, p_y - 1);
}

void	ft_check_path_2(char **map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'C' || map[i][j] == 'E')
				ft_error_exit("ERROR : invalid path!\n");
			j++;
		}
		i++;
	}
}
