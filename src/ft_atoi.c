/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 19:02:43 by mdelage           #+#    #+#             */
/*   Updated: 2014/11/09 17:20:16 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

int		ft_atoi(char *str)
{
	long int	n;
	char		*endptr;

	n = ft_strtol(str, &endptr);
	if (n > 0 && n > INT_MAX)
		return (0);
	else if (n < 0 && n < INT_MIN)
		return (0);
	return ((int) n);
}
