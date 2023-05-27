/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:55:43 by dstelmac          #+#    #+#             */
/*   Updated: 2023/05/27 12:19:05 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddl(size_t p, int *len)
{
	if (!p)
	{
		*len += write(1, "(nil)", 5);
		return ;
	}
	if (p < 16)
	{
		ft_putstrl("0x", len);
		ft_putcharl(HEX_LOWER[p % 16], len);
	}
	else
	{
		ft_putaddl(p / 16, len);
		ft_putcharl(HEX_LOWER[p % 16], len);
	}
}
