/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:26:17 by rchmouk           #+#    #+#             */
/*   Updated: 2023/02/05 16:58:54 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr1(const char *s, int c)
{
	int		i;
	char	a;
	char	*p;

	i = 0;
	if (!s)
		return (NULL);
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

char	*ft_strdup1(const char	*s1)
{
	int		i;
	char	*p;

	i = 0;
	p = malloc(ft_strlen1(s1) + 1);
	if (p == 0)
		return (0);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strjoin1(char	*s1, char	*s2)
{
	int		i;
	char	*s3;
	int		j;

	if (!s2)
		return (NULL);
	if (!s1)
		return (ft_strdup1(s2));
	j = ft_strlen1(s1);
	i = -1;
	s3 = malloc((ft_strlen1(s1) + ft_strlen1(s2) + 1) * sizeof(char));
	if (!s3)
		return (0);
	while (s1[++i] != '\0')
		s3[i] = s1[i];
	i = 0;
	while (s2[i] != '\0')
	{
		s3[j] = s2[i];
		i++;
		j++;
	}
	free (s1);
	return (s3[j] = '\0', s3);
}

size_t	ft_strlen1(const char *s1)
{
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}
