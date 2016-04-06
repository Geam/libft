/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 13:42:40 by mdelage           #+#    #+#             */
/*   Updated: 2016/04/06 13:43:07 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

static long int	ft_strtol_sub(const char *nptr, char **endptr, char sign)
{
	long int			n;
	unsigned long int	n2;

	n = 0;
	n2 = 0;
	while (ft_isdigit(**endptr))
	{
		n2 = n2 * 10 + **endptr - '0';
		if (n2 > LONG_MAX)
		{
			*endptr = (char *)nptr;
			return (0);
		}
		++(*endptr);
	}
	n = (long int)n2;
	if (sign == -1)
		n = -n;
	return (n);
}

long int		ft_strtol(const char *nptr, char **endptr)
{
	char	sign;

	*endptr = (char *)nptr;
	while (ft_iswhitespace(**endptr))
		++(*endptr);
	if (!ft_isdigit(**endptr) && **endptr != '-' && **endptr != '+')
		*endptr = (char *)nptr;
	else
	{
		sign = 1;
		if (**endptr == '-' || **endptr == '+')
		{
			if (**endptr == '-')
				sign = -1;
			++(*endptr);
		}
		return (ft_strtol_sub(nptr, endptr, sign));
	}
	return (0);
}
