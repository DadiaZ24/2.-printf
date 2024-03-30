/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:54:54 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/01/18 16:54:54 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, char *src, int n)
{
	int	i;
	int	sized;
	int	sizes;

	sized = ft_strlen(dst);
	if (!dst)
		sized = 0;
	sizes = ft_strlen(src);
	i = 0;
	if (n == 0 || sized > n)
		return (sizes + n);
	while ((src[i]) && ((i + sized) < n - 1))
	{
		dst[sized + i] = src[i];
		i++;
	}
	dst[sized + i] = '\0';
	return (sized + sizes);
}
