/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-azz <isel-azz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:53:32 by isel-azz          #+#    #+#             */
/*   Updated: 2023/12/07 15:04:24 by isel-azz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		count += print_str("(null)");
	}
	while (str && *str)
	{
		count += write(1, str, 1);
		str++;
	}
	return (count);
}
