/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:17:17 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 15:10:25 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		write (fd, s, ft_strlen(s));
	}
}
/*
int main (void)
{
	char s[] = "string";
	
	ft_putstr_fd(s, 1);

	return (0);
}
*/