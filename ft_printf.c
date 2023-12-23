/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-azz <isel-azz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:49:34 by isel-azz          #+#    #+#             */
/*   Updated: 2023/12/09 21:28:01 by isel-azz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char spec, va_list ap)
{
	int	count;

	count = 0;
	if (spec == 'c')
		count += print_char(va_arg(ap, int));
	else if (spec == 's')
		count += print_str(va_arg(ap, char *));
	else if (spec == 'd' || spec == 'i')
		count += print_number(va_arg(ap, int));
	else if (spec == 'u')
		count += print_unsigned(va_arg(ap, unsigned int));
	else if (spec == 'x')
		count += itohex(va_arg(ap, unsigned int), spec);
	else if (spec == 'X')
		count += itohex(va_arg(ap, unsigned int), spec);
	else if (spec == 'p')
		count += printadress(va_arg(ap, unsigned long));
	else if (spec == '%')
		count += print_char('%');
	else if (spec)
		count += print_char(spec);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	if (write(1, 0, 0) < 0)
		return (-1);
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += print_format(*format, ap);
		}
		else
			count += write(1, format, 1);
		if (*format)
			format++;
	}
	va_end(ap);
	return (count);
}
