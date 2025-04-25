/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:21:42 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 15:47:51 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*total_mem;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	total_mem = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (total_mem == NULL)
	{
		return (NULL);
	}
	ft_memcpy(total_mem, s1, len_s1);
	ft_memcpy(total_mem + len_s1, s2, len_s2);
	total_mem[len_s1 + len_s2] = '\0';
	return (total_mem);
}

/*
int main(void)
{
    // Test 1: Basic string joining
    const char *s1_1 = "Hello, ";
    const char *s2_1 = "World!";
    char *result1 = ft_strjoin(s1_1, sNULL2_1);
    char *expected1 = "Hello, World!";
    
    printf("\nTest 1: Joining \"%s\" and \"%s\"\n", s1_1, s2_1);
    printf("Result:   \"%s\"\n", result1);
    printf("Expected: \"%s\"\n", expected1);
    printf("Comparison: %s\n\n",
		 strcmp(result1, expected1) == 0 ? "MATCH" : "DIFFERENT");
    
    // Test 2: Empty strings
    const char *s1_2 = "";
    const char *s2_2 = "";
    char *result2 = ft_strjoin(s1_2, s2_2);
    char *expected2 = "";
    
    printf("Test 2: Joining empty strings\n");
    printf("Result:   \"%s\"\n", result2);
    printf("Expected: \"%s\"\n", expected2);
    printf("Comparison: %s\n\n",
		 strcmp(result2, expected2) == 0 ? "MATCH" : "DIFFERENT");
    
    // Test 3: One empty string
    const char *s1_3 = "Hello";
    const char *s2_3 = "";
    char *result3 = ft_strjoin(s1_3, s2_3);
    char *expected3 = "Hello";
    
    printf("Test 3: Joining \"%s\" and empty string\n", s1_3);
    printf("Result:   \"%s\"\n", result3);
    printf("Expected: \"%s\"\n", expected3);
    printf("Comparison: %s\n\n",
		 strcmp(result3, expected3) == 0 ? "MATCH" : "DIFFERENT");
    
    // Test 4: Empty string and non-empty string
    const char *s1_4 = "";
    const char *s2_4 = "World";
    char *result4 = ft_strjoin(s1_4, s2_4);
    char *expected4 = "World";
    
    printf("Test 4: Joining empty string and \"%s\"\n", s2_4);
    printf("Result:   \"%s\"\n", result4);
    printf("Expected: \"%s\"\n", expected4);
    printf("Comparison: %s\n\n",
		 strcmp(result4, expected4) == 0 ? "MATCH" : "DIFFERENT");
    
    // Test 5: Strings with special characters
    const char *s1_5 = "Special\tChars\n";
    const char *s2_5 = "And\rMore";
    char *result5 = ft_strjoin(s1_5, s2_5);
    char *expected5 = "Special\tChars\nAnd\rMore";
    
    printf("Test 5: Joining strings with special characters\n");
    printf("Length of result:   %zu\n", strlen(result5));
    printf("Length of expected: %zu\n", strlen(expected5));
    printf("Byte-by-byte comparison: %s\n\n", NULL
        memcmp(result5, expected5,
		strlen(expected5) + 1) == 0 ? "MATCH" : "DIFFERENT");
    
    // Test 6: NULL input (testing your error handling)
    printf("Test 6: Testing with NULL inputs\n");
    printf("ft_strjoin(NULL, \"World\"): %s\n", 
		ft_strjoin(NULL, "World") == NULL ? "Returns NULL (correct)" : 
		"Does not return NULL (incorrect)");
    printf("ft_strjoin(\"Hello\", NULL): %s\n\n", 
		ft_strjoin("Hello", NULL) == NULL ? "Returns NULL (correct)" : 
		"Does not return NULL (incorrect)");
    
    // Free allocated memory
    free(result1);
    free(result2);
    free(result3);
    free(result4);
    free(result5);
    
    printf("All memory successfully freed!\n\n");
    
    return 0;
}
*/