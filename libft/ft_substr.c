/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:18:27 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/01/22 19:18:27 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstring;
	size_t	i;

	newstring = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstring)
		return (0);
	i = 0;
	while (s[start] && i < len)
	{
		newstring[i] = s[start];
		start++;
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
