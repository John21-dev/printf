/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_num_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:47:58 by jmacera-          #+#    #+#             */
/*   Updated: 2024/01/12 14:11:43 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_num_hex(uint64_t bin_n)
{
	char	*hex_str;
	char	hex_digits[17];
	int		hex_len;
	int		index;

	if (bin_n == 0)
		return (ft_strdup("0"));
	hex_len = ft_hexlen(bin_n);
	hex_str = (char *)malloc(sizeof(char) * (hex_len + 1));
	if (!hex_str)
		return (NULL);
	*(hex_str + (hex_len)) = '\0';
	ft_strcpy(hex_digits, "0123456789abcdef");
	index = hex_len - 1;
	while (hex_len > 0)
	{
		hex_str[index--] = hex_digits[bin_n & 0xF];
		bin_n >>= 4;
		hex_len--;
	}
	return (hex_str);
}
