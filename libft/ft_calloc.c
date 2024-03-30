/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:30:22 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/01/22 18:30:22 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int nitems, int size)
{
	void	*str;

	str = malloc (nitems * size);
	if (!str)
		return (0);
	ft_bzero(str, size * nitems);
	return (str);
}
