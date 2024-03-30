/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:34:32 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/01/18 16:34:32 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, char *src, int n)
{
	int	i;
	int	size;

	size = ft_strlen(src);
	i = 0;
	if (!dst || !src)
		return (0);
	if (n == 0)
		return (size);
	while ((src[i]) && (i < n - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size);
}
