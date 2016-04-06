/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:40:53 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 20:22:27 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strndup(const char *s, size_t len)
{
	char	*dest;

	if ((dest = (char*)malloc(sizeof(char *) * (len + 1))))
	{
		ft_memcpy(dest, s, len);
		dest[len] = '\0';
	}
	return (dest);
}
