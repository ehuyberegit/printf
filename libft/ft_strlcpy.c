/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:42:35 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 11:45:17 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	src_size;

	src_size = 0;
	while (src[src_size] != '\0')
	{
		src_size++;
	}
	if (dst_size == 0)
	{
		return (src_size);
	}
	i = 0;
	while (i < dst_size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}
/*
int main(void)
{
    char dst1[20];
    const char *test_str = "Hello, world!";
    size_t ret1;
    
    // Test 1: Normal case with sufficient buffer size
    printf("Test 1: Normal case with sufficient buffer\n");
    ret1 = ft_strlcpy(dst1, test_str, sizeof(dst1));
    printf("ft_strlcpy result: dst = \"%s\", return = %zu\n", 
		dst1, ret1);
    
    // Test 2: Limited buffer size (truncation)
    printf("\nTest 2: Limited buffer (truncation)\n");
    ret1 = ft_strlcpy(dst1, test_str, 7);
    printf("ft_strlcpy result: dst = \"%s\", return = %zu\n", 
		dst1, ret1);
    
    // Test 3: Zero size
    printf("\nTest 3: Zero size\n");
    dst1[0] = 'X'; 
    ret1 = ft_strlcpy(dst1, test_str, 0);
    printf("ft_strlcpy result: dst[0] = '%c', return = %zu\n",
		dst1[0], ret1);
    
    // Test 4: Empty source string
    printf("\nTest 4: Empty source string\n");
    ret1 = ft_strlcpy(dst1, "", sizeof(dst1));
    printf("ft_strlcpy result: dst = \"%s\", return = %zu\n", 
		dst1, ret1);
    
    return 0;
}
*/
