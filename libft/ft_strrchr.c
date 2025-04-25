/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:45:58 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 14:10:25 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)&str[i]);
	}
	i--;
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}
/*
int main (void)
{
	char s[] = " ? olalala cest ici ?";
	int c = 'a';

	printf("Result : %s\n", ft_strrchr(s, c));

	return (0);
}
*/