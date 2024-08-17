/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:49:54 by jmacera-          #+#    #+#             */
/*   Updated: 2024/01/12 14:15:31 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(char c, int *ptr_printed_chars)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	write(1, &uc, sizeof(uc));
	*ptr_printed_chars += 1;
}
