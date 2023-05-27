/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:01:05 by dstelmac          #+#    #+#             */
/*   Updated: 2023/05/25 19:06:56 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_tipe(va_list args, char c, int *len)
{
	if (c == 'c')
		ft_putlchar(va_arg(args, int), len);
	if (c == 's')
		ft_putlstr(va_arg(args, char *), len);
	if (c == 'p')
		ft_putladd(va_arg(args, size_t), len);
	if (c == 'd')
		ft_putlnbr(va_arg(args, int), len);
	if (c == 'i')
		ft_putlnbr(va_arg(args, int), len);
	if (c == 'u')
		ft_putlnbr(va_arg(args, unsigned int), len);
	if (c == 'x')
		ft_putlhex(va_arg(args, unsigned int), "0123456789abcdef", len);
	if (c == 'X')
		ft_putlhex(va_arg(args, unsigned int), "0123456789ABCDEF", len);
	if (c == '%')
		ft_putlchar('%', len);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int i;
	int len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			ft_tipe(args, format[++i], &len);
		else
			ft_putlchar(format[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}
