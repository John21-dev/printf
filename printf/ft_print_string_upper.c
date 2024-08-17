/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string_upper.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 10:42:55 by jmacera-          #+#    #+#             */
/*   Updated: 2024/01/11 12:58:24 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_string_upper(char *str, int *ptr_printed_chars)
{
	while (*str)
		ft_print_char(ft_toupper(*(str++)), ptr_printed_chars);
}
