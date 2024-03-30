/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:04:25 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/01/23 18:04:25 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nsize(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_checkmin(char *str)
{
	str = "-2147483648";
	return (str);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

	size = ft_nsize(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	str[size] = '\0';
	if (n == -2147483648)
		return (ft_checkmin(str));
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	else if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[--size] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}
