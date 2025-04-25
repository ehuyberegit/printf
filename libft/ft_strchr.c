/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:52:19 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 14:11:20 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if ((unsigned char)c == '\0')
	{
		while (str[i])
		{
			i++;
		}
		return ((char *)&str[i]);
	}
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int main (void)
{
	char s[] = " ? olalala cest ici ?";
	int c = 'a';

	printf("Result : %s\n", ft_strchr(s, c));

	return (0);
}
*/