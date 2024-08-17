/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_decimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:50:17 by jmacera-          #+#    #+#             */
/*   Updated: 2024/01/15 11:15:08 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned_decimal(long n, int *ptr_printed_chars)
{
	char	*ptr;
	char	*or_ptr;

	ptr = ft_unsigned_itoa(n);
	or_ptr = ptr;
	while (*ptr)
		ft_print_char(*(ptr++), ptr_printed_chars);
	free(or_ptr);
}
