/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:48:11 by ehuybere          #+#    #+#             */
/*   Updated: 2025/05/01 16:35:39 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_dispatcher(char specifier, va_list args)
{
	switch (specifier)
	{
		case 'c':
			return (ft_print_char(args));
		case 's':
			return (ft_print_string(args));
		case 'p':
			return (ft_print_pointer(args));
		case 'd':
		case 'i':
			return (ft_print_int(args));
		case 'u':
			return (ft_print_uint(args));
		case 'x':
			return (ft_print_hex(args, 0));
		case 'X':
			return (ft_print_hex(args, 1));
		case '%':
			return (ft_print_percent());
		default:
			return (-1);
	}
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		length;
	va_list	args;

	i = 0;
	length = 0;
	va_start(args, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			length += ft_format_dispatcher(format[i], args);
		}
		else
		{
			write(1, &format[i], 1);
			length++;
		}
		i++;
	}
	va_end(args);
	return (length);
}
