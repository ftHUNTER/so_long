/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map2_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:16:01 by rchmouk           #+#    #+#             */
/*   Updated: 2023/02/16 00:31:32 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_last_line(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i - 1);
}

int	ft_check_sides(char *line)
{
	if (line[0] != '1')
		return (0);
	if (line[ft_strlen(line) - 1] != '1')
		return (0);
	return (1);
}

void	ft_check_map2(char **map)
{
	int	i;
	int	x;

	i = 0;
	while (map[0][i])
	{
		if (map[0][i] != '1')
			ft_error_exit("ERROR : map open from the top!");
		i++;
	}
	x = ft_last_line(map);
	i = 0;
	while (map[x][i])
	{
		if (map[x][i] != '1')
			ft_error_exit("ERROR : map open from the down!");
		i++;
	}
	i = 0;
	while (map[i])
		if (ft_check_sides(map[i++]) == 0)
			ft_error_exit("ERROR : map open from the sides!");
	i = 0;
}
