/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converters_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:32:14 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/29 18:12:01 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_print_char(va_list args, t_flags *flags);
int ft_print_string(va_list args, t_flags *flags);
int ft_print_void_pointer(va_list args, t_flags *flags);