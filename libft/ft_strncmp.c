/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:53:13 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 12:34:27 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] && str1[i] == str2[i] && i < n - 1)
		i++;
	if (i < n)
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	return (0);
}
/*
int main (void)
{
	char str1[] = "ABCE";
	char str2[] = "ABCD";
	int result;

	printf("Comparasion of %s and %s \n", str1, str2);
	result = ft_strncmp(str1, str2, 4);
	printf("Result : %d \n", result);

	return (0);
}
*/