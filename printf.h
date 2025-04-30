/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwanhuyberechts <erwanhuyberechts@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:31:39 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/30 15:13:46 by erwanhuyber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

typedef struct	s_flags
{
	int	hashtag;
	int	space;
	int	plus;
	int	minus;
	int	zero;
	int	width;
	int	dot;
	int	precision;
}	t_flags;

int		ft_printf(const char *format, ...);
int		ft_parse_format(const char *format, int *i, t_flags *flags, va_list args);
int		ft_format_dispatcher(char specifier, va_list args, t_flags *flags);

void	ft_init_flags(t_flags *flags);
int		ft_is_flag(char c);
void	ft_set_flag(char c, t_flags *flags);
int		ft_parse_width(const char *format, int *i, t_flags *flags, va_list args);
int		ft_parse_precision(const char *format, int *i, va_list args);

int		ft_print_char(va_list args, t_flags *flags);
int		ft_print_string(va_list args, t_flags *flags);
int		ft_print_void_pointer(va_list args, t_flags *flags);

int		ft_print_decimal(va_list args, t_flags *flags);
int		ft_print_integer(va_list args, t_flags *flags);
int		ft_print_unsigned(va_list args, t_flags *flags);

int		ft_low_hexa(va_list args, t_flags *flags);
int		ft_up_hexa(va_list args, t_flags *flags);
int		ft_print_percent(va_list args, t_flags *flags);

#endif