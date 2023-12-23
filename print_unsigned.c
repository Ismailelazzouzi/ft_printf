/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-azz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:56:09 by isel-azz          #+#    #+#             */
/*   Updated: 2023/12/06 19:58:35 by isel-azz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int nbr)
{
	static int	count;

	count = 0;
	if (nbr < 10)
		count += print_char(nbr + 48);
	if (nbr > 9)
	{
		print_unsigned(nbr / 10);
		count += print_char(nbr % 10 + 48);
	}
	return (count);
}
