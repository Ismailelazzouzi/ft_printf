/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itohex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-azz <isel-azz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:18:03 by isel-azz          #+#    #+#             */
/*   Updated: 2023/12/07 16:13:23 by isel-azz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	itohex(unsigned long nbr, char spec)
{
	static int		count;
	char			*set;

	count = 0;
	set = "0123456789abcdef";
	if (spec == 'X')
		set = "0123456789ABCDEF";
	if (nbr < 0)
		nbr = -nbr;
	if (nbr < 16)
		count += print_char(set[nbr]);
	if (nbr > 15)
	{
		itohex(nbr / 16, spec);
		count += print_char(set[nbr % 16]);
	}
	return (count);
}
