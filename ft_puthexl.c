/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 11:41:06 by dstelmac          #+#    #+#             */
/*   Updated: 2023/05/27 13:13:36 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexl(unsigned int nbr, char *hex, int *len)
{
	if (nbr >= 16)
		ft_puthexl(nbr / 16, hex, len);
	ft_putcharl(hex[nbr % 16], len);
}
