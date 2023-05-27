/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:26:21 by dstelmac          #+#    #+#             */
/*   Updated: 2023/05/27 13:16:13 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstrl(char *str, int *len)
{
	int	i;

	if (!str)
	{
		*len += write(1, "(null)", 6);
		return ;
	}
	i = 0;
	while (str[i])
	{
		ft_putcharl(str[i], len);
		i++;
	}
}
