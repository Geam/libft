/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/16 20:02:54 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/16 20:02:56 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_wordlen(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_fill_tab(char const *s, char c, int nb)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (j <= nb)
	{
		while (s[i] && s[i] == c)
			i++;
		j++;
		if (j <= nb)
			i = i + ft_wordlen(s + i, c);
	}
	if (!(str = malloc((ft_wordlen(s + i, c) + 1))))
		return (NULL);
	j = 0;
	while (s[i] != c && s[i])
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

static int	ft_nbword(char const *s, char c)
{
	int		nb_word;
	int		i;

	i = 0;
	nb_word = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if ((i == 0 || s[i - 1] == c) && (s[i] != c && s[i]) )
			nb_word++;
		i++;
	}
	return (nb_word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		nb_word;
	int		i;

	i = 0;
	nb_word = ft_nbword(s, c);
	if (!s)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char*) * (nb_word + 1))))
		return (NULL);
	while (i < nb_word)
	{
		tab[i] = ft_fill_tab(s, c, i);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
