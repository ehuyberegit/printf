/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converters_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:32:14 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/30 12:13:13 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_char(va_list args, t_flags *flags)
{
	char	c;
	int		i;
	int		count;
	
	c = (char)va_arg(args, int);
	count = 1;
	if (flags -> width > 1)
	{
		count = flags -> width;
		if (flags -> minus == 1)
		{
			write(1, &c, 1);
			i = 0;
			while (i < (flags -> width) - 1)
			{
				write(1, " ", 1);
				i++;
			}
		}
		else
		{
			i = 0;
			while (i < (flags -> width) - 1)
			{
				write(1, " ", 1);
				i++;
			}
			write(1, &c, 1);
		}
	}
	else
    {
        write(1, &c, 1);
    }
    return (count); 
}

int ft_print_string(va_list args, t_flags *flags)
{

}

int ft_print_void_pointer(va_list args, t_flags *flags);