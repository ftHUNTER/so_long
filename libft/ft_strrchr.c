/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:04:52 by rchmouk           #+#    #+#             */
/*   Updated: 2022/10/27 17:09:19 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;
	char	a;

	i = ft_strlen(s);
	p = (char *)s;
	a = (char)c;
	while (i >= 0)
	{
		if (p[i] == a)
			return (&p[i]);
		i--;
	}
	if (a == '\0')
		return (&p[i]);
	return (0);
}
