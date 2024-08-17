/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_void.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:50:20 by jmacera-          #+#    #+#             */
/*   Updated: 2023/11/20 11:54:57 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long num)
{
	char	*symbols;
	long	value;

	value = 0;
	symbols = "0123456789abcdef";
	if (num >= 16)
	{
		value += ft_ptr(num / 16);
		value += ft_ptr(num % 16);
	}
	else
		value += write (1, &symbols[num], 1);
	return (value);
}

int	ft_print_void_pointer(unsigned long num)
{
	long	value;
	char	*symbols;

	symbols = "0123456789abcdef";
	value = 0;
	if (!num)
		value += write (1, "(nil)", 5);
	else
	{
		value += write (1, "0x", 2);
		value += ft_ptr(num);
	}
	return (value);
}
