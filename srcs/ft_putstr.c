/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 10:25:50 by mdelage           #+#    #+#             */
/*   Updated: 2013/12/24 19:36:15 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		ft_putstr(char const *s)
{
	int		len;

	len = -1;
	if (s != NULL)
	{
		len = ft_strlen(s);
		write(1, s, len);
	}
	return (len);
}
