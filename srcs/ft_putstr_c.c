/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 09:54:32 by mdelage           #+#    #+#             */
/*   Updated: 2013/12/24 19:36:33 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_c(char *s, char *color)
{
	int		len;

	len = -1;
	if (s != NULL)
	{
		ft_putstr(color);
		len = ft_putstr(s);
		ft_putstr(NORMAL);
	}
	return (-1);
}
