/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:05:09 by rchmouk           #+#    #+#             */
/*   Updated: 2022/10/29 19:11:40 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*s2;
	int		size;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	if (j == 0)
		return (ft_strdup(""));
	while (ft_check(s1[i], set) == 1)
		i++;
	while (ft_check(s1[j - 1], set) == 1)
		j--;
	if (i > j)
		i = j;
	s2 = malloc (sizeof(char) * (j - i + 1));
	if (!s2)
		return (0);
	size = j - i;
	j = 0;
	while (j < size)
		s2[j++] = s1[i++];
	return (s2[j] = '\0', s2);
}
