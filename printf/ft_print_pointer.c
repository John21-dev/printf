/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:36:47 by jmacera-          #+#    #+#             */
/*   Updated: 2024/01/15 11:06:37 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_pointer(void *ptr_address, int *ptr_printed_chars)
{
	char			*ptr_address_str;

	ptr_address_str = ft_conv_ptr_hex((uintptr_t) ptr_address);
	ft_print_string(ptr_address_str, ptr_printed_chars);
	free(ptr_address_str);
}
