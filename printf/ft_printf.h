/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:37:27 by jmacera-          #+#    #+#             */
/*   Updated: 2024/01/15 12:57:49 by jmacera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_hexlen(uint64_t bin_n);
int		ft_printf(const char *format, ...);
int		ft_print_format(char *format, int *ptr_printed_chars, va_list *ap);
int		ft_print_void_pointer(unsigned long num );
int		ft_strlen(char *str);
int		ft_toupper(int c);

char	*ft_conv_num_hex(uint64_t bin_n);
char	*ft_conv_ptr_hex(uintptr_t bin_n);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *des, char *src);
char	*ft_itoa(int n);
char	*ft_unsigned_itoa(int n);

void	ft_percentage(void);
void	ft_print_pointer(void *ptr_address, int *ptr_printed_chars);
void	ft_print_string_upper(char *str, int *ptr_printed_chars);
void	ft_print_pointer(void *ptr_address, int *ptr_printed_chars);
void	ft_print_hex_upper(unsigned int ptr_address, int *ptr_printed_chars);
void	ft_print_hex_lower(unsigned int ptr_address, int *ptr_printed_chars);
void	ft_print_unsigned_decimal(long n, int *ptr_printed_chars);
void	ft_print_char(char c, int *ptr_printed_chars);
void	ft_print_digit(int n, int *ptr_printed_chars);
void	ft_print_string(char *str, int *ptr_printed_chars);

#endif
