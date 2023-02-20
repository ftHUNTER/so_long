/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:56:49 by rchmouk           #+#    #+#             */
/*   Updated: 2022/10/27 17:08:25 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t	n)
{
	size_t	i;
	char	*s1;
	char	a;

	s1 = (char *)s;
	a = (char)c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == a)
			return ((s1 + i));
		i++;
	}
	return (NULL);
}
