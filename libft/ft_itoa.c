/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:56:29 by rchmouk           #+#    #+#             */
/*   Updated: 2022/10/27 17:14:17 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
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

char	*ft_itoa(int n)
{
	long	i;
	long	nb;
	long	x;
	char	*str;

	i = 0;
	x = n;
	nb = count(x);
	str = malloc(nb + 1);
	if (!str)
		return (0);
	if (x < 0)
	{
		x = x * -1;
		str[0] = '-';
	}
	i = nb - 1;
	if (x == 0)
		str[0] = '0';
	while (x != 0)
	{
		str[i--] = (x % 10) + 48;
		x = x / 10;
	}
	return (str[nb] = '\0', str);
}
