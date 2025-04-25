/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:28:07 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 11:15:48 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	dst_size = 0;
	src_size = 0;
	if (size == 0)
		return (ft_strlen(src));
	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (dst_size >= size)
		return (size + src_size);
	i = 0;
	while (i < size - dst_size - 1 && src[i] != '\0')
	{
		dst [dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (dst_size + src_size);
}
/*
int main(void)
{
    // Test 1: Basic concatenation
    char dest1[50] = "Hello, ";
    char dest1_std[50] = "Hello, ";
    const char *src1 = "World!";
    size_t result1, result1_std;
    
    result1 = ft_strlcat(dest1, src1, sizeof(dest1));
    result1_std = strlcat(dest1_std, src1, sizeof(dest1_std));
    
    printf("\nTest 1: Basic concatenation\n");
    printf("ft_strlcat result: %s (return: %zu)\n", dest1, result1);
    printf("strlcat result:    %s (return: %zu)\n", dest1_std, result1_std);
    printf("Comparison: %s\n\n", 
		strcmp(dest1, dest1_std) == 0 
		&& result1 == result1_std ? "MATCH" : "DIFFERENT");
    
    // Test 2: Size exactly fits concatenated string (excluding null terminator)
    char dest2[14] = "Hello, ";
    char dest2_std[14] = "Hello, ";
    const char *src2 = "World!";
    size_t result2, result2_std;
    
    result2 = ft_strlcat(dest2, src2, 13);
    result2_std = strlcat(dest2_std, src2, 13);
    
    printf("Test 2: Size exactly fits concatenated string\n");
    printf("ft_strlcat result: %s (return: %zu)\n", dest2, result2);
    printf("strlcat result:    %s (return: %zu)\n", dest2_std, result2_std);
    printf("Comparison: %s\n\n", 
		strcmp(dest2, dest2_std) == 0 &&
		result2 == result2_std ? "MATCH" : "DIFFERENT");
    
    // Test 3: Size less than dest length
    char dest3[50] = "Hello, World!";
    char dest3_std[50] = "Hello, World!";
    const char *src3 = "This shouldn't be appended";
    size_t result3, result3_std;
    
    result3 = ft_strlcat(dest3, src3, 5); // Less than dest length
    result3_std = strlcat(dest3_std, src3, 5);
    
    printf("Test 3: Size less than dest length\n");
    printf("ft_strlcat result: %s (return: %zu)\n", dest3, result3);
    printf("strlcat result:    %s (return: %zu)\n", dest3_std, result3_std);
    printf("Comparison: %s\n\n", 
		strcmp(dest3, dest3_std) == 0 &&
		result3 == result3_std ? "MATCH" : "DIFFERENT");
    
    // Test 4: Empty destination string
    char dest4[50] = "";
    char dest4_std[50] = "";
    const char *src4 = "Hello!";
    size_t result4, result4_std;
    
    result4 = ft_strlcat(dest4, src4, sizeof(dest4));
    result4_std = strlcat(dest4_std, src4, sizeof(dest4_std));
    
    printf("Test 4: Empty destination string\n");
    printf("ft_strlcat result: %s (return: %zu)\n", dest4, result4);
    printf("strlcat result:    %s (return: %zu)\n", dest4_std, result4_std);
    printf("Comparison: %s\n\n", 
		strcmp(dest4, dest4_std) == 0 && 
		result4 == result4_std ? "MATCH" : "DIFFERENT");
    
    // Test 5: Empty source string
    char dest5[50] = "Destination only";
    char dest5_std[50] = "Destination only";
    const char *src5 = "";
    size_t result5, result5_std;
    
    result5 = ft_strlcat(dest5, src5, sizeof(dest5));
    result5_std = strlcat(dest5_std, src5, sizeof(dest5_std));
    
    printf("Test 5: Empty source string\n");
    printf("ft_strlcat result: %s (return: %zu)\n", dest5, result5);
    printf("strlcat result:    %s (return: %zu)\n", dest5_std, result5_std);
    printf("Comparison: %s\n\n", 
		strcmp(dest5, dest5_std) == 0 && 
		result5 == result5_std ? "MATCH" : "DIFFERENT");
    
    // Test 6: Size parameter is 0
    char dest6[50] = "Hello";
    char dest6_std[50] = "Hello";
    const char *src6 = "World";
    size_t result6, result6_std;
    
    result6 = ft_strlcat(dest6, src6, 0);
    result6_std = strlcat(dest6_std, src6, 0);
    
    printf("Test 6: Size parameter is 0\n");
    printf("ft_strlcat result: %s (return: %zu)\n", dest6, result6);
    printf("strlcat result:    %s (return: %zu)\n", dest6_std, result6_std);
    printf("Comparison: %s\n\n", 
		strcmp(dest6, dest6_std) == 0 && 
		result6 == result6_std ? "MATCH" : "DIFFERENT");
    
    // Test 7: Destination buffer exact size (tricky case)
    char dest7[10] = "1234";
    char dest7_std[10] = "1234";
    const char *src7 = "56789";
    size_t result7, result7_std;
    
    result7 = ft_strlcat(dest7, src7, 10); // Buffer size exactly 10
    result7_std = strlcat(dest7_std, src7, 10);
    
    printf("Test 7: Destination buffer exact size\n");
    printf("ft_strlcat result: %s (return: %zu)\n", dest7, result7);
    printf("strlcat result:    %s (return: %zu)\n", dest7_std, result7_std);
    printf("Comparison: %s\n\n", 
		strcmp(dest7, dest7_std) == 0 && 
		result7 == result7_std ? "MATCH" : "DIFFERENT");
    
    return 0;
}
*/
