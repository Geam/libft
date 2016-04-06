/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/16 20:02:54 by mdelage           #+#    #+#             */
/*   Updated: 2015/01/26 18:20:36 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_nb_word(char const *s, char c)
{
	int		word;
	int		nb_word;

	word = 0;
	nb_word = 0;
	while (*s)
	{
		if (*s != c && !word)
		{
			++word;
			++nb_word;
		}
		else if (*s == c && word)
			--word;
		++s;
	}
	return (nb_word);
}

static char	*ft_fill_str(char *src, char c, char **dest)
{
	int			len;

	while (*src == c)
		++src;
	len = 0;
	while (src[len] != '\0' && src[len] != c)
		++len;
	if (len)
		*dest = (char *)malloc(sizeof(char) * (len + 1));
	if (*dest)
	{
		len = -1;
		while (src[++len] != '\0' && src[len] != c)
			(*dest)[len] = src[len];
		(*dest)[len] = '\0';
		src += len;
	}
	if (!*src)
		return (0);
	return (src);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**tab;
	char	*temp;

	tab = (char **)malloc(sizeof(char *) * (ft_nb_word(s, c) + 1));
	if (tab)
	{
		i = 0;
		tab[i] = NULL;
		temp = (char *)s;
		while ((temp = ft_fill_str(temp, c, &(tab[i]))))
			tab[++i] = NULL;
	}
	return (tab);
}