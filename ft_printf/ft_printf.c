/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 07:36:06 by rchmouk           #+#    #+#             */
/*   Updated: 2022/11/06 10:29:20 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list arg)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (c == 'i' || c == 'd')
		len += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		len += ft_u(va_arg(arg, unsigned int));
	else if (c == 'x')
		len += ft_putx(va_arg(arg, unsigned int), c);
	else if (c == 'X')
		len += ft_putx(va_arg(arg, unsigned int), c);
	else if (c == 'p')
	{
		len += ft_putstr("0x");
		len += ft_putpx(va_arg(arg, unsigned long));
	}
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	ptr;

	i = 0;
	len = 0;
	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] != '%')
			len += ft_putchar(format[i]);
		if (format[i] == '%')
			len += ft_check(format[++i], ptr);
		if (format[i] == '\0')
			return (len);
		i++;
	}
	va_end (ptr);
	return (len);
}
