/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:28:57 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/02/04 14:28:57 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	putptrhex(unsigned long nbr, const char c)
{
	char	*base;
	int		result;

	result = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		result += putptrhex((nbr / 16), c);
		result += putptrhex((nbr % 16), c);
	}
	else
	{
		result += write(1, &base[nbr], 1);
	}
	return (result);
}

int	ft_putptr(unsigned long nbr)
{
	int		result;

	result = 0;
	if (!nbr)
		return (write(1, "(null)", 6));
	result += ft_putstr("0x");
	result += putptrhex(nbr, 'x');
	return (result);
}
