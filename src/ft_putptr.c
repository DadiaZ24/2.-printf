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

int	ft_putptr(unsigned long nbr)
{
	int		result;

	result = 0;
	if (!nbr)
		return (write(1, "(null)", 6));
	result += ft_putstr("0x");
	result += ft_putnbrhex(nbr, 'x');
	return (result);
}
