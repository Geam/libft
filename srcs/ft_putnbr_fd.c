/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:00:16 by mdelage           #+#    #+#             */
/*   Updated: 2013/12/31 15:44:56 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		ft_putnbr_fd(long n, int fd, int ret)
{
	if (n < 0)
	{
		ret += ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
		ret += ft_putnbr_fd(n / 10, fd, ret);
	ret += ft_putchar_fd(n % 10 + '0', fd);
	return (ret);
}
