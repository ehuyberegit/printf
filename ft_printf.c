/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwanhuyberechts <erwanhuyberechts@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:48:11 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/30 15:12:56 by erwanhuyber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_format_dispatcher(char specifier, va_list args, t_flags *flags)
{
	switch (specifier)
	{
		case 'c':
			return (ft_print_char(args, flags));
		case 's':
			return (ft_print_string(args, flags));
		case 'p':
			return (ft_print_void_pointer(args, flags));
		case 'd':
			return (ft_print_decimal(args, flags));
		case 'i':
			return (ft_print_integer(args, flags));
		case 'u':
			return (ft_print_unsigned(args, flags));
		case 'x':
			return (ft_low_hexa(args, flags));
		case 'X':
			return (ft_up_hexa(args, flags));
		case '%':
			return (ft_print_percent(args, flags));
		default:
			return (-1);
	}
}

int	ft_parse_format(const char *format, int *i, t_flags *flags, va_list args)
{
	ft_init_flags(flags);
	while(format[*i] && ft_is_flag(format[*i]))
	{
		ft_set_flag(format[*i], flags);
		(*i)++;
	}
	if (ft_isdigit(format[*i]) || format[*i] == '*')
		flags -> width = ft_parse_width(format, i, flags, args);
	if (format[*i] == '.')
	{
		flags -> dot = 1;
		(*i)++;
		flags -> precision = ft_parse_precision(format, i, args);
	}
	if (ft_strchr("cspdiuxX%",(const int)format[*i]) != NULL)
		return (format[(*i)++]);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		len_printed;
	int		i;
	t_flags	flags;
	va_list	args;
	char	specifier;

	if (!format)
		return (-1);
	va_start(args, format);
	len_printed = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			specifier = ft_parse_format(format, &i, &flags, args);
			if (specifier)
				len_printed += ft_format_dispatcher(specifier, args, &flags);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			len_printed++;
			i++;
		}
	}
	va_end(args);
	return (len_printed);
}