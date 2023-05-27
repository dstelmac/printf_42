/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstelmac <dstelmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:37:58 by dstelmac          #+#    #+#             */
/*   Updated: 2023/05/27 12:09:06 by dstelmac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define HEX_UPPER "0123456789ABCDEF"
# define HEX_LOWER "0123456789abcdef"

int		ft_printf(const char *format, ...);
void	ft_putcharl(char c, int *len);
void	ft_putstrl(char *str, int *len);
void	ft_putaddl(size_t p, int *len);
void	ft_putnbrl(long nbr, int *len);
void	ft_puthexl(unsigned int nbr, char *hex, int *len);

#endif