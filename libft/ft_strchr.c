/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:59:43 by rchmouk           #+#    #+#             */
/*   Updated: 2022/10/30 21:28:13 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	a;
	char	*p;

	i = 0;
	p = (char *)s;
	a = (char)c;
	while (p[i] != '\0')
	{
		if (p[i] == a)
			return (&p[i]);
		i++;
	}
	if (a == '\0')
		return (&p[i]);
	return (NULL);
}
