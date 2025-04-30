/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converters_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwanhuyberechts <erwanhuyberechts@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:32:14 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/30 19:25:09 by erwanhuyber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_pad(int len, char c)
{
    while (len-- > 0)
        write(1, &c, 1);
}

int	ft_print_char(va_list args, t_flags *flags)
{
    char c;
    int padding;
	
	c = (char)va_arg(args, int);
	padding = (flags->width > 1) ? flags->width - 1 : 0;
    if (!flags->minus)
        ft_pad(padding, ' ');
    write(1, &c, 1);
    if (flags->minus)
        ft_pad(padding, ' '); 
    return (1 + padding);
}

int ft_print_string(va_list args, t_flags *flags)
{
	char	*str;
	int		str_len;
	int		padding;
	
	str = va_arg(args, char *);
	if (!str)
		str = "(null)";
	str_len = ft_strlen(str);
	if (flags->dot && flags->precision < str_len)
		str_len = flags->precision;
	padding = (flags->width > str_len) ? flags->width - str_len : 0;
	if (!flag->minus)
		ft_pad(padding, ' ');
	write(1, str, str_len);
	if (flag->minus)
		ft_pad(padding, ' ');
	return (padding + str_len);
}

int ft_print_percent(va_list args, t_flags *flags)
{
    (void)args;
	int padding;
	char pad_char;
	
    padding = (flags->width > 1) ? flags->width - 1 : 0;
    pad_char = (flags->zero && !flags->minus) ? '0' : ' ';
    if (!flags->minus)
        ft_pad(padding, pad_char);
    write(1, "%", 1);
    if (flags->minus)
        ft_pad(padding, ' ');
    return (1 + padding);
}
