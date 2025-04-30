/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwanhuyberechts <erwanhuyberechts@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:09:05 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/30 15:12:18 by erwanhuyber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_init_flags(t_flags *flags)
{
	flags -> zero = 0;
	flags -> minus = 0;
	flags -> plus = 0;
	flags -> space = 0;
	flags -> hashtag = 0;
	flags -> width = 0;
	flags -> precision = 0;
	flags -> dot = 0;
}

int ft_is_flag(char c)
{
	if (ft_strchr("0-+ #",(const int)c) != NULL)
		return (1);
	else
		return (0);
}

void ft_set_flag(char c, t_flags *flags)
{
	switch (c)
	{
		case '0':
			flags -> zero = 1;
			break;
		case '-':
			flags -> minus = 1;
			flags -> zero = 0;
			break;
		case '+':
			flags -> plus = 1;
			flags -> space = 0;
			break;
		case ' ':
			flags -> space = 1;
			break;
		case '#':
			flags -> hashtag = 1;
			break;
		default:
			break;
	}
}

int ft_parse_width(const char *format, int *i, t_flags *flags, va_list args)
{
	int	width;

	if (format[*i] == '*')
	{
		(*i)++;
		width = va_arg(args, int);
		if (width < 0)
		{
			flags -> minus = 1;
			return (-width);
		}
		return (width);
	}
	else if (ft_isdigit(format[*i]))
	{
		width = 0;
		while (ft_isdigit(format[*i]))
		{
			width = width * 10 + (format[*i] - '0');
			(*i)++;
		}
		return (width);
	}
	return (0);
}

int ft_parse_precision(const char *format, int *i, va_list args)
{
	int	precision;

	if (format[*i] == '*')
	{
		(*i)++;
		precision = va_arg(args, int);
		if (precision < 0)
			return (0);
		return (precision);
	}
	else if (ft_isdigit(format[*i]))
	{
		precision = 0;
		while (ft_isdigit(format[*i]))
		{
			precision = precision * 10 + (format[*i] - '0');
			(*i)++;
		}
		return (precision);
	}
	return (0);
}

