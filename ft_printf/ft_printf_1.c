/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 07:35:48 by rchmouk           #+#    #+#             */
/*   Updated: 2022/11/06 10:03:02 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
		ft_putchar(str[i++]);
	return (i);
}

int	count(int n)
{
	long	len;
	long	nb;

	nb = n;
	len = 0;
	if (nb <= 0)
	{
		len++;
		nb = nb * -1;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

int	ft_putnbr(int nb)
{
	int	x;

	x = count(nb);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			nb = nb * -1;
			ft_putchar('-');
		}
		if (nb <= 9)
			ft_putchar(nb + 48);
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
	return (x);
}

int	ft_u(unsigned int nb)
{
	int	x;

	x = countu(nb);
	if (nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	return (x);
}
