/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:01:05 by dstelmac          #+#    #+#             */
/*   Updated: 2023/05/27 13:00:44 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_tipe(va_list args, char c, int *len)
{
	if (c == 'c')
		ft_putcharl(va_arg(args, int), len);
	if (c == 's')
		ft_putstrl(va_arg(args, char *), len);
	if (c == 'p')
		ft_putaddl(va_arg(args, size_t), len);
	if (c == 'd')
		ft_putnbrl(va_arg(args, int), len);
	if (c == 'i')
		ft_putnbrl(va_arg(args, int), len);
	if (c == 'u')
		ft_putnbrl(va_arg(args, unsigned int), len);
	if (c == 'x')
		ft_puthexl(va_arg(args, unsigned int), HEX_LOWER, len);
	if (c == 'X')
		ft_puthexl(va_arg(args, unsigned int), HEX_UPPER, len);
	if (c == '%')
		ft_putcharl('%', len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			ft_tipe(args, format[++i], &len);
		else
			ft_putcharl(format[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}
