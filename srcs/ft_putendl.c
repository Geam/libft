/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 10:25:15 by mdelage           #+#    #+#             */
/*   Updated: 2013/12/24 19:02:43 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putendl(char const *s)
{
	int		len;

	len = -1;
	if (s != NULL)
	{
		len = ft_putstr(s);
		len += ft_putchar('\n');
	}
	return (len);
}
