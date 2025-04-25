/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:10:52 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 14:49:03 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (size == 0)
		return (dst);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s || d >= s + size)
	{
		while (size--)
			*d++ = *s++;
	}
	else
	{
		d += size - 1;
		s += size - 1;
		while (size--)
			*d-- = *s--;
	}
	return (dst);
}
