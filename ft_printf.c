/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:48:11 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/25 13:49:45 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	va_list	arg_list;
	
	va_start(arg_list, format);

	len = 0;
	i = 0;
	while(format[i] != '\0')
	{
		if (ft_isprint(format[i]) == 1)
		{
			ft_putchar_fd(format[i], 1);
			len ++;
		}
		i++;
	}
	return (len);
}

int	main(void)
{
	char	str[] = "YO Y.>/OYO";
	
	ft_printf(str);
	return (0);
}