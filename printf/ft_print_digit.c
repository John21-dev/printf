/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:49:59 by jmacera-          #+#    #+#             */
/*   Updated: 2024/01/12 14:15:59 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_print_digit(int n, int *ptr_printed_chars)
{
	char	*ptr;
	char	*or_ptr;

	ptr = ft_itoa(n);
	or_ptr = ptr;
	while (*ptr)
		ft_print_char(*(ptr++), ptr_printed_chars);
	free(or_ptr);
}
