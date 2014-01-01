/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 10:26:02 by mdelage           #+#    #+#             */
/*   Updated: 2013/12/24 19:20:23 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		ft_putnbr(long n, int ret)
{
	if (n < 0)
	{
		ret += ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
		ret += ft_putnbr(n / 10, ret);
	ret += ft_putchar(n % 10 + '0');
	return (ret);
}
