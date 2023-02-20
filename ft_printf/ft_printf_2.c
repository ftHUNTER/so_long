/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 07:35:42 by rchmouk           #+#    #+#             */
/*   Updated: 2022/11/06 10:30:59 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenpx(unsigned long long y)
{
	int	len;

	len = 1;
	while (y >= 16)
	{
		y = y / 16;
		len++;
	}
	return (len);
}

int	ft_lenx(unsigned int y)
{
	int	len;

	len = 1;
	while (y >= 16)
	{
		len++;
		y = y / 16;
	}
	return (len);
}

int	countu(unsigned int n)
{
	long	len;
	long	nb;

	nb = n;
	len = 0;
	if (n == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

int	ft_putx(unsigned int x, const char c)
{
	unsigned int	y;

	y = x;
	if (x >= 16)
	{
		ft_putx(x / 16, c);
		ft_putx(x % 16, c);
	}
	else
	{
		if (x <= 9)
			ft_putchar(x + 48);
		else
		{
			if (c == 'x')
				ft_putchar((x - 10 + 'a'));
			if (c == 'X')
				ft_putchar((x - 10 + 'A'));
		}
	}
	return (ft_lenx(y));
}

int	ft_putpx(unsigned long x)
{
	if (x >= 16)
	{
		ft_putpx(x / 16);
		ft_putpx(x % 16);
	}
	else
	{
		if (x <= 9)
			ft_putchar(x + 48);
		else
			ft_putchar((x - 10 + 'a'));
	}
	return (ft_lenpx(x));
}
