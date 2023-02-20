/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 21:58:08 by rchmouk           #+#    #+#             */
/*   Updated: 2023/02/17 23:35:35 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	main(int ac, char **av)
{
	char	**map;
	int		i;

	i = 0;
	if (ac == 2)
	{
		ft_map(av);
		map = ft_check_map1(av[1]);
		ft_game(map);
	}
	else
		ft_printf("\033[0;33mERROR :the program take ones parameter.\n");
}
