/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:41:27 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/01/18 15:41:27 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, void *s2, int n)
{
	int		i;
	char	*dst;
	char	*src;

	dst = (char *)s1;
	src = (char *)s2;
	if (!dst && !src)
		return (0);
	i = -1;
	if (dst > src)
	{
		while (--n >= 0)
			dst[n] = src[n];
	}
	else
	{
		while (++i < n)
			dst[i] = src[i];
	}
	return (dst);
}
