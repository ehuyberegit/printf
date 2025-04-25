/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:15:52 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 11:46:38 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen(int n)
{
	long long	num;
	size_t		len;

	num = n;
	len = 0;
	if (num <= 0)
	{
		num *= -1;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*result;
	long long	num;
	size_t		len;

	num = n;
	len = ft_numlen(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num == 0)
		result[0] = '0';
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		result[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

/*
int main(void)
{
    char *str;

    str = ft_itoa(42);
    printf("Test 1 (42): %s\n", str);
    free(str);
    
    str = ft_itoa(123456);
    printf("Test 2 (123456): %s\n", str);
    free(str);
    
    str = ft_itoa(0);
    printf("Test 3 (0): %s\n", str);
    free(str);
    
    str = ft_itoa(-42);
    printf("Test 4 (-42): %s\n", str);
    free(str);
    
    str = ft_itoa(-123456);
    printf("Test 5 (-123456): %s\n", str);
    free(str);
    
    str = ft_itoa(INT_MAX);
    printf("Test 6 (INT_MAX: %d): %s\n", INT_MAX, str);
    free(str);
    
    str = ft_itoa(INT_MIN);
    printf("Test 7 (INT_MIN: %d): %s\n", INT_MIN, str);
    free(str);
    
    return (0);
}
*/
