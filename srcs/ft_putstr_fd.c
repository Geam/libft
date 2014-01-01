/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/24 19:06:01 by mdelage           #+#    #+#             */
/*   Updated: 2013/12/24 19:36:40 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		ft_putstr_fd(char const *s, int fd)
{
	int		len;

	len = -1;
	if (s != NULL)
	{
		len = ft_strlen(s);
		write(fd, s, len);
	}
	return (len);
}
