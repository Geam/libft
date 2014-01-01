/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:26:51 by mdelage           #+#    #+#             */
/*   Updated: 2013/12/03 10:55:17 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ssrc;
	size_t	sdest;
	size_t	i;

	i = 0;
	ssrc = ft_strlen(src);
	sdest = ft_strlen(dest);
	if (sdest > size)
		return (ssrc + size);
	while (src[i])
	{
		if (sdest + i < size - 1)
			dest[sdest + i] = src[i];
		else
			dest[sdest + i] = '\0';
		i++;
	}
	dest[sdest + i] = '\0';
	return (sdest + i);
}
