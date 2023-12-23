/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_adress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-azz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:52:33 by isel-azz          #+#    #+#             */
/*   Updated: 2023/12/06 19:52:35 by isel-azz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printadress(unsigned long adress)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	if (adress == 0)
		return (count += print_char('0'), count);
	count += itohex(adress, 'x');
	return (count);
}
