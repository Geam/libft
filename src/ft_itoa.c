/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 12:36:58 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/28 18:42:56 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int			ft_fillnbr(long n, char *text, int i)
{
	if (n < 0)
	{
		text[i] = '-';
		i++;
		n *= -1;
	}
	if (n >= 10)
		i = ft_fillnbr(n / 10, text, i);
	text[i] = n % 10 + '0';
	return (i + 1);
}

char		*ft_itoa(int n)
{
	int		size;
	char	*text;
	int		ret;

	size = ft_nbrlen(n);
	text = (char *)malloc(sizeof(char) * (size + 1));
	if (text)
	{
		ret = ft_fillnbr((long)n, text, 0);
		text[ret] = '\0';
		return (text);
	}
	return (NULL);
}
