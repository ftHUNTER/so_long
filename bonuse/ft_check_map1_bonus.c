/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map1_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:42:20 by rchmouk           #+#    #+#             */
/*   Updated: 2023/02/17 23:34:45 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_error_exit(char *str)
{
	ft_printf("%s", str);
	exit(1);
}

void	ft_check_components(char *m)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (m[0] == '\n')
		ft_error_exit("ERROR :invalid map!\n");
	while (m[i])
	{
		if (i != 0 && m[i] == '\n' && (m[i + 1] == '\n' || m[i + 1] == '\0'))
			ft_error_exit("ERROR :invalid map!\n");
		if (m[i] != 'P' && m[i] != 'E' && m[i] != 'C' && m[i] != '1'
			&& m[i] != '0' && m[i] != '\n' && m[i] != 'X')
			ft_error_exit("ERROR :invalid map!\n");
		i++;
	}
}

void	ft_count_items(char *map, int i, int p, int c)
{
	int	e;
	int	x;

	e = 0;
	x = 0;
	while (map[i++])
	{
		if (map[i] == 'P')
			p++;
		else if (map[i] == 'C')
			c++;
		else if (map[i] == 'E')
			e++;
		else if (map[i] == 'X')
			x++;
	}
	if (p != 1)
		ft_error_exit("ERROR :player error!\n");
	if (e != 1)
		ft_error_exit("ERROR :exit error!\n");
	if (c < 1)
		ft_error_exit("ERROR :coins error!\n");
	if (x < 1)
		ft_error_exit("ERROR :ennemi error!\n");
	ft_check_components(map);
}

char	*ft_read_map(char *str)
{
	int		fd;
	char	*s;
	char	*tmp;

	s = NULL;
	fd = open(str, O_RDONLY);
	if (fd < 0)
	{
		ft_printf("\033[0;3ERROR :1mERROR :Wrong file name !");
		exit(1);
	}
	tmp = get_next_line(fd);
	s = ft_strdup("");
	while (tmp)
	{
		s = ft_strjoin(s, tmp);
		free(tmp);
		tmp = get_next_line(fd);
	}
	free(tmp);
	return (s);
}

char	**ft_check_map1(char *str)
{
	char	*map;
	char	**big_map;
	int		i;
	size_t	x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	map = ft_read_map(str);
	ft_count_items(map, 0, 0, 0);
	big_map = ft_split(map, '\n');
	free(map);
	x = ft_strlen(big_map[i]);
	if (x < 3)
		ft_error_exit("ERROR :invalid map!\n");
	while (big_map[i])
	{
		if (x != ft_strlen(big_map[i++]))
			ft_error_exit("ERROR :invalid map!\n");
		y++;
	}
	if (y < 3)
		ft_error_exit("ERROR :invalid map!\n");
	return (big_map);
}
