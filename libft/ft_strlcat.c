/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:01:32 by rchmouk           #+#    #+#             */
/*   Updated: 2022/10/27 17:09:03 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	sd;
	size_t	ss;
	size_t	i;
	size_t	j;

	if (dst == 0 && dstsize == 0)
		return (ft_strlen(src));
	sd = ft_strlen(dst);
	ss = ft_strlen(src);
	i = 0;
	j = sd;
	if (dstsize == 0 || dstsize <= sd)
	{
		return (ss + dstsize);
	}
	while (src[i] && i < dstsize - sd - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (sd + ss);
}
