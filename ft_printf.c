/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:48:11 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/29 18:16:18 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_format_dispatcher(char specifier, va_list args, t_flags *flags)
{
    /* Call the appropriate conversion function based on the specifier */
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
		flags -> width = ft_parse_width(format, i, args);
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

int	main(void)
{
	char	str[] = "YO Y.>/OYO";
	int		nbr_printed;
	
	nbr_printed = ft_printf(str);
	return (0);
}