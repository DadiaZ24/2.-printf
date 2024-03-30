/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:23:55 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/02/04 15:23:55 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	result;

	result = 0;
	if (nbr < 0)
	{
		result += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr < 10)
		result += ft_putchar(nbr + 48);
	else
	{
		result += ft_putnbr((nbr / 10));
		result += ft_putnbr((nbr % 10));
	}
	return (result);
}
