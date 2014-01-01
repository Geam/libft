/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:19:35 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/26 17:23:59 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const unsigned char	*t_s;
	unsigned char	t_c;

	i = 0;
	t_s = s;
	t_c = (unsigned char)c;
	while (i < n)
	{
		if (t_s[i] == t_c)
			return (&((unsigned char*)t_s)[i]);
		i++;
	}
	return (NULL);
}
