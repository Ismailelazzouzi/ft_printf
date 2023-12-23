/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-azz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:50:25 by isel-azz          #+#    #+#             */
/*   Updated: 2023/12/06 19:58:06 by isel-azz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	print_char(int c);
int	itohex(unsigned long nbr, char spec);
int	print_number(int nbr);
int	print_str(char *str);
int	printadress(unsigned long adress);
int	print_format(char spec, va_list ap);
int	print_unsigned(unsigned int nbr);
#endif
