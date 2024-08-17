/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:50:24 by jmacera-          #+#    #+#             */
/*   Updated: 2024/01/15 15:00:02 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed_chars;
	int		*ptr_printed_chars;

	printed_chars = 0;
	ptr_printed_chars = &printed_chars;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (ft_print_format((char *)format, ptr_printed_chars, &args) == -1)
				return (printed_chars += 1);
		}
		else
			ft_print_char(*format, ptr_printed_chars);
		format++;
	}
	return (va_end(args), printed_chars);
}
