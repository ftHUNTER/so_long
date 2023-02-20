/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anime_player_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:35:24 by rchmouk           #+#    #+#             */
/*   Updated: 2023/02/17 21:40:29 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_do_anim_player_help(char *str, t_mlx *p, int x, int y)
{
	ft_image2("./textuer/floor.xpm", p, x, y);
	ft_image2(str, p, x, y);
}

void	ft_do_anim_player(int x, int y, int time, t_mlx *p)
{
	if (time == 1)
		ft_do_anim_player_help("./textuer/player1.xpm", p, x, y);
	else if (time == 1000)
		ft_do_anim_player_help("./textuer/player2.xpm", p, x, y);
	else if (time == 2000)
		ft_do_anim_player_help("./textuer/player3.xpm", p, x, y);
	else if (time == 3000)
		ft_do_anim_player_help("./textuer/player4.xpm", p, x, y);
	else if (time == 4000)
		ft_do_anim_player_help("./textuer/player5.xpm", p, x, y);
	else if (time == 5000)
		ft_do_anim_player_help("./textuer/player6.xpm", p, x, y);
	else if (time == 6000)
		ft_do_anim_player_help("./textuer/player7.xpm", p, x, y);
	else if (time == 7000)
		ft_do_anim_player_help("./textuer/player8.xpm", p, x, y);
}
