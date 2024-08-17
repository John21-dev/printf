/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:50:14 by jmacera-          #+#    #+#             */
/*   Updated: 2024/01/15 11:12:51 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_string(char *str, int *ptr_printed_chars)
{
	if (str != NULL)
	{
		while (*str)
			ft_print_char(*(str++), ptr_printed_chars);
	}
	else
	{
		write(1, "(null)", 6);
		*ptr_printed_chars += 6;
	}
}
