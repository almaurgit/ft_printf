/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 01:29:22 by amaurel           #+#    #+#             */
/*   Updated: 2018/09/26 17:36:30 by amaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_percent(t_buffer *buffer, t_conversion conv, t_argument arg)
{
	int i;

	i = 0;
	if (!(conv.id_pad & MOINS)
			&& (!(conv.id_pad & ZERO)))
		while (i++ < conv.width - 1)
			if (!(ft_putbuffer(' ', buffer)))
				return (0);
	if (conv.id_pad & ZERO && !(conv.id_pad & MOINS))
		while (i++ < conv.width - 1)
			if (!(ft_putbuffer('0', buffer)))
				return (0);
	if (!(ft_putbuffer('%', buffer)))
		return (0);
	if (conv.id_pad & MOINS)
		while (i++ < conv.width - 1)
			if (!(ft_putbuffer(' ', buffer)))
				return (0);
	return (1);
}
