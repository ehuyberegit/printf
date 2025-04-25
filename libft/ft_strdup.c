/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:57:14 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 11:09:09 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*memory;

	len = ft_strlen(str);
	memory = (char *)malloc(len + 1);
	if (memory == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		memory[i] = str[i];
		i++;
	}
	memory[i] = '\0';
	return (memory);
}

/*
int main(void)
{
    // Test 1: Basic string duplication
    const char *str1 = "Hello, World!";
    char *dup1_ft = ft_strdup(str1);
    char *dup1_std = strdup(str1);
    
    printf("\nTest 1: Duplicating \"%s\"\n", str1);
    printf("Original string address:   %p\n", str1);
    printf("ft_strdup result address:  %p\n", dup1_ft);
    printf("strdup result address:     %p\n", dup1_std);
    printf("ft_strdup content: \"%s\"\n", dup1_ft);
    printf("strdup content:    \"%s\"\n", dup1_std);
    printf("Comparison result: %s\n\n", 
		strcmp(dup1_ft, dup1_std) == 0 ? "MATCH" : "DIFFERENT");
    
    // Test 2: Empty string
    const char *str2 = "";
    char *dup2_ft = ft_strdup(str2);
    char *dup2_std = strdup(str2);
    
    printf("Test 2: Duplicating empty string\n");
    printf("Original string address:   %p\n", str2);
    printf("ft_strdup result address:  %p\n", dup2_ft);
    printf("strdup result address:     %p\n", dup2_std);
    printf("ft_strdup content: \"%s\"\n", dup2_ft);
    printf("strdup content:    \"%s\"\n", dup2_std);
    printf("Comparison result: %s\n\n",
		 strcmp(dup2_ft, dup2_std) == 0 ? "MATCH" : "DIFFERENT");
    
    // Test 3: String with special characters
    const char *str3 = "Special\tCharacters\nAnd\rStuff";
    char *dup3_ft = ft_strdup(str3);
    char *dup3_std = strdup(str3);
    
    printf("Test 3: Duplicating string with special characters\n");
    printf("Original string length: %zu\n", strlen(str3));
    printf("ft_strdup length:      %zu\n", strlen(dup3_ft));
    printf("strdup length:         %zu\n", strlen(dup3_std));
    printf("Byte-by-byte comparison: %s\n\n",
		 memcmp(dup3_ft, dup3_std, 
		 strlen(str3) + 1) == 0 ? "MATCH" : "DIFFERENT");
    
    // Test 4: Long string
    char long_str[1000];
    memset(long_str, 'A', 998);
    long_str[998] = 'Z';
    long_str[999] = '\0';
    
    char *dup4_ft = ft_strdup(long_str);
    char *dup4_std = strdup(long_str);
    
    printf("Test 4: Duplicating long string (1000 chars)\n");
    printf("Original string length: %zu\n", strlen(long_str));
    printf("ft_strdup length:      %zu\n", strlen(dup4_ft));
    printf("strdup length:         %zu\n", strlen(dup4_std));
    printf("Last character match:  %s\n", dup4_ft[998] == 'Z' ? "YES" : "NO");
    printf("Comparison result:     %s\n\n", 
		strcmp(dup4_ft, dup4_std) == 0 ? "MATCH" : "DIFFERENT");
    
    // Free all allocated memory
    free(dup1_ft);
    free(dup1_std);
    free(dup2_ft);
    free(dup2_std);
    free(dup3_ft);
    free(dup3_std);
    free(dup4_ft);
    free(dup4_std);
    
    printf("All memory successfully freed!\n\n");
    
    return 0;
}
*/
