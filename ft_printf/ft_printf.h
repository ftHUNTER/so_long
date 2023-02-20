/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 00:17:58 by rchmouk           #+#    #+#             */
/*   Updated: 2022/11/06 10:14:58 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FT_PRINTF_H
# define    FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "ft_printf.h"

int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(const char *str);
int	ft_u(unsigned int nb);
int	count(int n);
int	ft_putx(unsigned int x, const char c);
int	ft_printf(const char *format, ...);
int	countu(unsigned int n);
int	ft_putpx(unsigned long x);

#endif