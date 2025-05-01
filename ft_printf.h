/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:31:39 by ehuybere          #+#    #+#             */
/*   Updated: 2025/05/01 16:35:33 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_format_dispatcher(const char format, va_list args);
int		ft_print_char(va_list args);
int		ft_print_string(va_list args);
int		ft_print_pointer(va_list args);
int		ft_print_int(va_list args);
int		ft_print_uint(va_list args);
int		ft_print_hex(va_list args, int uppercase);
int		ft_print_percent(void);

int		ft_u_int_len(int n);
int		ft_u_long_len(unsigned long n);
int		ft_print_number(char *num_str);
char	*ft_uitohex(unsigned int n, int uppercase);
char	*ft_ultohex(unsigned long n);

#endif