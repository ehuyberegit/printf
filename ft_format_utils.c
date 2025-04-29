/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:09:05 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/29 18:08:31 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_init_flags(t_flags *flags)
{
    /* Initialize all flag fields to 0 */
}

int ft_is_flag(char c)
{
    /* Return 1 if c is a valid flag character (0, -, +, ' ', #), 0 otherwise */
}

void ft_set_flag(char c, t_flags *flags)
{
    /* Set the appropriate flag in the flags structure based on character c */
}

int ft_parse_width(const char *format, int *i, va_list args)
{
    /* Parse and return the width value from format string or va_arg if '*' */
}

int ft_parse_precision(const char *format, int *i, va_list args)
{
    /* Parse and return the precision value from format string or va_arg if '*' */
}

