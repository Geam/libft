/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 09:54:19 by mdelage           #+#    #+#             */
/*   Updated: 2013/12/24 19:22:29 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putendl_c(char *s, char *color)
{
	int		len;

	len = -1;
	if (s != NULL)
	{
		len = ft_putstr_c(s, color);
		len += ft_putchar('\n');
	}
	return (len);
}
