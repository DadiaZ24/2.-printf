/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 00:36:58 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/01/14 00:36:58 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, char c)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (str[i])
	{
		if (str[i] == c)
			break ;
		i++;
	}
	if (c == '\0')
		return (str + i);
	if (size <= i)
		return (0);
	return (str + i);
}
