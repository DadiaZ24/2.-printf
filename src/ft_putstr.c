/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:56:19 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/02/01 22:56:19 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (!str)
		result += write(1, "(null)", 6);
	while (str[i])
	{
		result += write(1, &str[i], 1);
		i++;
	}
	return (result);
}
