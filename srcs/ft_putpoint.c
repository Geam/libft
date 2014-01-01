/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 20:12:34 by mdelage           #+#    #+#             */
/*   Updated: 2013/12/24 19:59:44 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sys.h"
#include "ft_struct.h"
#include "ft_printf.h"

int		ft_put_point(t_param *data, void *nbr)
{
	int		size;

	(void)data;
	size = 0;
	size += printf_putstr("0x");
	size += ft_putbase(*(unsigned long *)nbr, 0, 16);
	return (size);
}
