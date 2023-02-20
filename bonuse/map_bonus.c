/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:35:26 by rchmouk           #+#    #+#             */
/*   Updated: 2023/02/16 10:48:03 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	check_ber(char *str)
{
	char	*s;

	s = ft_strrchr(str, '.');
	if (ft_memcmp(s, ".ber\0", 5) == 0)
		return (1);
	return (0);
}

int	ft_player_x(char **map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			if (map[y][x] == 'P')
				return (x);
			x++;
		}
		y++;
	}
	return (-1);
}

int	ft_player_y(char **map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			if (map[y][x] == 'P')
				return (y);
			x++;
		}
		y++;
	}
	return (-1);
}

void	ft_check_path(char **map)
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
			if (map[i][j] == 'C')
				ft_error_exit("ERROR : invalid path!\n");
			j++;
		}
		i++;
	}
}

void	ft_map(char **av)
{
	char	**map;
	char	**map2;
	int		p_x;
	int		p_y;
	int		i;

	i = 0;
	if (check_ber(av[1]) == 0)
		ft_error_exit("\033[0;33mERROR! :extension must be [.ber]");
	map = ft_check_map1(av[1]);
	ft_check_map2(map);
	p_x = ft_player_x(map);
	p_y = ft_player_y(map);
	ft_flood_fill(map, p_x, p_y);
	ft_check_path(map);
	while (map[i])
		free(map[i++]);
	free(map);
	map2 = ft_check_map1(av[1]);
	ft_flood_fill_2(map2, p_x, p_y);
	ft_check_path_2(map2);
	i = 0;
	while (map2[i])
		free(map2[i++]);
	free(map2);
}
