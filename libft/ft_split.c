/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:07:51 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/01/23 17:07:51 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if ((s[i] != c) && s[i])
			count++;
		while ((s[i] != c) && s[i])
			i++;
	}
	return (count);
}

int	ft_wordlen(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		count++;
	}
	return (count);
}

char	**ft_split(char *s, char c)
{
	char	**newstring;
	int		i;
	int		j;
	int		k;
	int		count_words;

	i = -1;
	j = 0;
	count_words = ft_countwords(s, c);
	newstring = (char **)malloc(sizeof(char *) * (count_words + 1));
	if (!newstring)
		return (0);
	while (++i < count_words)
	{
		k = 0;
		while (s[j] == c)
			j++;
		newstring[i] = (char *)malloc(sizeof(char)
				* (ft_wordlen(&s[j], c) + 1));
		while (s[j] != c && s[j])
			newstring[i][k++] = s[j++];
		newstring[i][k] = '\0';
	}
	newstring[i] = '\0';
	return (newstring);
}
