/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:33:09 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 14:48:54 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	const char	*temp_src;
	char		*temp_dst;
	size_t		i;

	if (size == 0)
		return (dst);
	i = 0;
	temp_src = (const char *)src;
	temp_dst = (char *)dst;
	while (i < size)
	{
		temp_dst[i] = temp_src[i];
		i++;
	}
	return (dst);
}
