/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:57:09 by rchmouk           #+#    #+#             */
/*   Updated: 2023/02/14 20:41:20 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	size_t	i;
	char	*s11;
	char	*s22;

	s11 = (char *)s1;
	s22 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (s11 && s22[i] != s11[i])
			return (((unsigned char)s11[i] - (unsigned char)s22[i]));
		i++;
	}
	return (0);
}
