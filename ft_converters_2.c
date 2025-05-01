/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converters_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:34:02 by ehuybere          #+#    #+#             */
/*   Updated: 2025/05/01 16:36:04 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(va_list args)
{
	int		num;
	char	*num_str;
	int		len;

	num = va_arg(args, int);
	num_str = ft_itoa(num);
	if (!num_str)
		return (0);
	len = ft_strlen(num_str);
	write(1, num_str, len);
	free(num_str);
	return (len);
}

int	ft_print_uint(va_list args)
{
	unsigned int	num;
	char			*num_str;
	int				len;

	num = va_arg(args, unsigned int);
	num_str = ft_uitoa(num);
	if (!num_str)
		return (0);
	len = ft_strlen(num_str);
	write(1, num_str, len);
	free(num_str);
	return (len);
}

int	ft_u_int_len(int n)
{
	int	len;
	
	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n/=16;
		len++;
	}
	return (len);
	
}

char	*ft_uitohex(unsigned int n, int uppercase)
{
	char	*hexa;
	int		len;
	
	len = ft_u_int_len(n);
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
			hexa[--len] = (n % 16) - 10 + (uppercase ? 'A' : 'a');
		n /= 16;
	}
	return (hexa);
}

int	ft_print_hex(va_list args, int uppercase)
{
	char	*hexa;
	int		len;
	int		num;
	
	num = va_arg(args, unsigned int);
	hexa = ft_uitohex(num, uppercase);
	if (!hexa)
		return (0);
	len = ft_strlen(hexa);
	write(1, hexa, len);
	free(hexa);
	return(len);
}