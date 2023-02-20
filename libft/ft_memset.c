/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:57:56 by rchmouk           #+#    #+#             */
/*   Updated: 2022/11/01 01:08:52 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*b1;

	b1 = (char *)b;
	i = 0;
	while (i < len)
	{
		b1[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
