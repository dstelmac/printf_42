/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 11:19:52 by dstelmac          #+#    #+#             */
/*   Updated: 2023/05/27 12:07:58 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrl(long nbr, int *len)
{
	if (nbr < 0)
	{
		ft_putcharl('-', len);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbrl(nbr / 10, len);
		ft_putnbrl(nbr % 10, len);
	}
	else
		ft_putcharl(nbr + '0', len);
}
