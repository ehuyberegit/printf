/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:48:11 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/25 16:51:22 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	int		len_printed;
	int		temp_special_len;
	int		i;
	int		flag_found;
	va_list	args;
	
	va_start(args, format);
	len = 0;
	i = 0;
	if (!format || (format[i] == % && format[i + 1] == '\0'))
		return (-1);
	while(format[i] != '\0')
	{
		if (format[i] != '%' && !flag_found)
		{
			ft_print_plain_cara(&i, const char *format);
			len_printed++;
		}
		if (format[i] == )
		i++;
	}
	va_end(args)
	return (len);
}

int	main(void)
{
	char	str[] = "YO Y.>/OYO";
	int		nbr_printed;
	
	nbr_printed = ft_printf(str);
	return (0);
}