/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:50:07 by jmacera-          #+#    #+#             */
/*   Updated: 2024/01/15 10:51:08 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex_lower(unsigned int ptr_address, int *ptr_printed_chars)
{
	char	*ptr_address_str;

	ptr_address_str = NULL;
	ptr_address_str = ft_conv_num_hex((uint64_t)ptr_address);
	ft_print_string(ptr_address_str, ptr_printed_chars);
	free(ptr_address_str);
}
