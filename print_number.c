/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-azz <isel-azz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:54:15 by isel-azz          #+#    #+#             */
/*   Updated: 2023/12/07 15:03:44 by isel-azz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	countlen(int nbr)
{
	long long	nb;
	int			count;

	count = 1;
	nb = nbr;
	if (nbr < 0)
	{
		count++;
		nb = -nb;
	}
	while (nb > 9)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

int	print_number(int nbr)
{
	long long	nb;
	int			count;

	nb = nbr;
	count = 0;
	if (nbr < 0)
	{
		print_char('-');
		nb = -nb;
	}
	if (nb < 10)
	{
		print_char(nb + 48);
	}
	if (nb > 9)
	{
		print_number(nb / 10);
		print_char(nb % 10 + 48);
	}
	return (countlen(nbr));
}
