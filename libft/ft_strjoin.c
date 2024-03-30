/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:30:12 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/01/22 19:30:12 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	int		i;
	int		j;
	int		size;

	size = ft_strlen(s1) + ft_strlen(s2);
	newstring = (char *)malloc(sizeof(char) * (size + 1));
	if (!newstring)
		return (0);
	i = 0;
	j = 0;
	while ((i < size) && s1[i])
	{
		newstring[i] = s1[i];
		i++;
	}
	while ((i < size) && s2[j])
	{
		newstring[i] = s2[j];
		i++;
		j++;
	}
	newstring[i] = '\0';
	return (newstring);
}
