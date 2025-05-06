/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converters_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:34:22 by ehuybere          #+#    #+#             */
/*   Updated: 2025/05/06 11:34:46 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ultohex(unsigned long n)
{
	char	*hexa;
	int		len;

	len = ft_u_long_len(n);
	hexa = (char *)calloc((len + 1), sizeof(char));
	if (!hexa)
		return (NULL);
	if (n == 0)
		hexa[0] = '0';
	while (n > 0)
	{
		if (9 >= (n % 16))
			hexa[--len] = (n % 16) + '0';
		else
			hexa[--len] = (n % 16) - 10 + 'a';
		n /= 16;
	}
	return (hexa);
}

int	ft_print_pointer(va_list args)
{
	char			*pointer;
	int				len;
	unsigned long	num;

	num = (unsigned long)va_arg(args, void *);
	if (!num)
	{
		write(1, "(nil)", 5);
		return (3);
	}
	pointer = ft_ultohex(num);
	if (!pointer)
		return (0);
	len = ft_strlen(pointer);
	write(1, "0x", 2);
	write(1, pointer, len);
	free(pointer);
	return (len + 2);
}
