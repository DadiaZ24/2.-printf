/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:22:03 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/01/18 17:22:03 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *origin, char *find, int n)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (!find[i])
		return (origin);
	while ((origin[i]) && (origin[i] != find[0]) && (i < n))
		i++;
	if (i >= n)
		return (0);
	k = i;
	while (find[j])
	{
		if (k > n)
			return (0);
		if (origin[k] == find[j++])
		{
			k++;
		}
		else
			return (0);
	}
	return (origin + i);
}
