/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_ptr_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:59:05 by jmacera-          #+#    #+#             */
/*   Updated: 2024/01/15 11:01:29 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_ptr_hex(uintptr_t bin_n)
{
	char	*hex_str;
	char	hex_digits[17];
	int		hex_len;
	int		index;

	if (bin_n == 0)
		return (ft_strdup("(nil)"));
	hex_len = ft_hexlen(bin_n);
	hex_str = (char *)malloc(sizeof(char) * (hex_len + 3));
	if (!hex_str)
		return (NULL);
	*(hex_str + (hex_len + 2)) = '\0';
	ft_strcpy(hex_digits, "0123456789abcdef");
	index = hex_len + 1;
	while (hex_len-- > 0)
	{
		hex_str[index--] = hex_digits[bin_n & 0xF];
		bin_n >>= 4;
	}
	hex_str[0] = '0';
	hex_str[1] = 'x';
	return (hex_str);
}
