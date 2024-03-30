/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:12:13 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/01/18 17:12:13 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int c, int n)
{
	int		i;
	char	*ms;
	char	mc;

	i = 0;
	ms = (char *)str;
	mc = (char)c;
	while ((ms[i]) && (ms[i] != mc) && (i < n - 1))
		i++;
	if (ms[i] == mc)
		return (ms + i);
	return (0);
}
