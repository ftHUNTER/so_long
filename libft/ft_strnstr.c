/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:04:37 by rchmouk           #+#    #+#             */
/*   Updated: 2022/10/27 17:09:17 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	i;
	size_t	j;
	size_t	lenn;

	i = 0;
	j = 0;
	lenn = ft_strlen(needle);
	if (len == 0 && !haystack)
		return (0);
	if (lenn == 0)
		return ((char *)&haystack[i]);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[j])
			j++;
		else if (needle[j] != haystack[i])
		{
			i = i - j ;
			j = 0;
		}
		if (j == lenn)
			return ((char *)&haystack[i - j + 1]);
		i++;
	}
	return (0);
}
