/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:03:43 by rchmouk           #+#    #+#             */
/*   Updated: 2022/11/01 04:14:10 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t	n)
{
	size_t	i;
	char	*src1;
	char	*dest1;

	src1 = (char *)src;
	dest1 = (char *)dst;
	i = 0;
	if (dst == src)
		return (dst);
	if (src1 == 0 && dest1 == 0)
		return (NULL);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}
