/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_plain_cara.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:45:06 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/25 16:46:39 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_plain_cara(int i, const char *format)
{
	if (format[i + 1] == '\0')
		va_end(args);
		return (-1);
	ft_putchar_fd(format[i], 1);
	return (1)
}