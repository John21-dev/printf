/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:50:02 by jmacera-          #+#    #+#             */
/*   Updated: 2024/01/15 11:15:31 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char *format, int *ptr_printed_chars, va_list *ap)
{
	if (*format == 's')
		ft_print_string(va_arg(*ap, char *), ptr_printed_chars);
	else if (*format == 'd')
		ft_print_digit(va_arg(*ap, int), ptr_printed_chars);
	else if (*format == 'c')
		ft_print_char(va_arg(*ap, int), ptr_printed_chars);
	else if (*format == 'p')
		ft_print_pointer(va_arg(*ap, void *), ptr_printed_chars);
	else if (*format == 'i')
		ft_print_digit(va_arg(*ap, int), ptr_printed_chars);
	else if (*format == 'u')
		ft_print_unsigned_decimal(va_arg(*ap, unsigned int), ptr_printed_chars);
	else if (*format == 'x')
		ft_print_hex_lower(va_arg(*ap, unsigned int), ptr_printed_chars);
	else if (*format == 'X')
		ft_print_hex_upper(va_arg(*ap, unsigned int), ptr_printed_chars);
	else if (*format == '%')
		ft_print_char('%', ptr_printed_chars);
	else
		return (-1);
	return (0);
}
