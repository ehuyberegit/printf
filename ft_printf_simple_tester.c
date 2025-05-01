/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_simple_tester.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 00:00:00 by tester            #+#    #+#             */
/*   Updated: 2025/05/01 16:35:52 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "ft_printf.h"

// Helper function to compare results
void compare_results(const char *test_name, int original, int yours) {
    printf("\n--- Test: %s ---\n", test_name);
    printf("Original printf return: %d\n", original);
    printf("Your ft_printf return: %d\n", yours);
    if (original == yours)
        printf("✅ Return values match!\n");
    else
        printf("❌ Return values differ!\n");
}

int main(void)
{
    int ret_orig, ret_ft;

    printf("\n===================================\n");
    printf("   FT_PRINTF SIMPLE TESTER   \n");
    printf("===================================\n");
    
    // Test character (%c)
    printf("\n==== TESTING %%c ====\n");
    printf("Original: ");
    ret_orig = printf("Character test: %c %c %c\n", 'A', 'B', 'C');
    printf("Your ft_printf: ");
    ret_ft = ft_printf("Character test: %c %c %c\n", 'A', 'B', 'C');
    compare_results("Character test", ret_orig, ret_ft);
    
    // Test string (%s)
    printf("\n==== TESTING %%s ====\n");
    printf("Original: ");
    ret_orig = printf("String test: %s %s\n", "Hello", "World");
    printf("Your ft_printf: ");
    ret_ft = ft_printf("String test: %s %s\n", "Hello", "World");
    compare_results("String test", ret_orig, ret_ft);
    
    // Test pointer (%p)
    int num = 42;
    void *ptr = &num;
    printf("\n==== TESTING %%p ====\n");
    printf("Original: ");
    ret_orig = printf("Pointer test: %p\n", ptr);
    printf("Your ft_printf: ");
    ret_ft = ft_printf("Pointer test: %p\n", ptr);
    compare_results("Pointer test", ret_orig, ret_ft);
    
    // Test decimal (%d)
    printf("\n==== TESTING %%d ====\n");
    printf("Original: ");
    ret_orig = printf("Decimal test: %d %d %d\n", 42, -42, 0);
    printf("Your ft_printf: ");
    ret_ft = ft_printf("Decimal test: %d %d %d\n", 42, -42, 0);
    compare_results("Decimal test", ret_orig, ret_ft);
    
    // Test integer (%i)
    printf("\n==== TESTING %%i ====\n");
    printf("Original: ");
    ret_orig = printf("Integer test: %i %i %i\n", 42, -42, 0);
    printf("Your ft_printf: ");
    ret_ft = ft_printf("Integer test: %i %i %i\n", 42, -42, 0);
    compare_results("Integer test", ret_orig, ret_ft);
    
    // Test unsigned (%u)
    printf("\n==== TESTING %%u ====\n");
    printf("Original: ");
    ret_orig = printf("Unsigned test: %u %u\n", 42, 4294967295u);
    printf("Your ft_printf: ");
    ret_ft = ft_printf("Unsigned test: %u %u\n", 42, 4294967295u);
    compare_results("Unsigned test", ret_orig, ret_ft);
    
    // Test hex lowercase (%x)
    printf("\n==== TESTING %%x ====\n");
    printf("Original: ");
    ret_orig = printf("Hex lowercase test: %x %x %x\n", 0, 42, 0xabcdef);
    printf("Your ft_printf: ");
    ret_ft = ft_printf("Hex lowercase test: %x %x %x\n", 0, 42, 0xabcdef);
    compare_results("Hex lowercase test", ret_orig, ret_ft);
    
    // Test hex uppercase (%X)
    printf("\n==== TESTING %%X ====\n");
    printf("Original: ");
    ret_orig = printf("Hex uppercase test: %X %X %X\n", 0, 42, 0xABCDEF);
    printf("Your ft_printf: ");
    ret_ft = ft_printf("Hex uppercase test: %X %X %X\n", 0, 42, 0xABCDEF);
    compare_results("Hex uppercase test", ret_orig, ret_ft);
    
    // Test percent (%%)
    printf("\n==== TESTING %% ====\n");
    printf("Original: ");
    ret_orig = printf("Percent test: %% %% %%\n");
    printf("Your ft_printf: ");
    ret_ft = ft_printf("Percent test: %% %% %%\n");
    compare_results("Percent test", ret_orig, ret_ft);
    
    // Test mixed formats
    printf("\n==== TESTING MIXED FORMATS ====\n");
    printf("Original: ");
    ret_orig = printf("Mixed test: %c %s %p %d %i %u %x %X %%\n", 
                    'Z', "test", ptr, -42, 42, 123, 0xabc, 0xDEF);
    printf("Your ft_printf: ");
    ret_ft = ft_printf("Mixed test: %c %s %p %d %i %u %x %X %%\n", 
                    'Z', "test", ptr, -42, 42, 123, 0xabc, 0xDEF);
    compare_results("Mixed formats test", ret_orig, ret_ft);
    
    // Test INT_MIN and INT_MAX
    printf("\n==== TESTING LIMITS ====\n");
    printf("Original: ");
    ret_orig = printf("Limits test: INT_MIN=%d, INT_MAX=%d\n", INT_MIN, INT_MAX);
    printf("Your ft_printf: ");
    ret_ft = ft_printf("Limits test: INT_MIN=%d, INT_MAX=%d\n", INT_MIN, INT_MAX);
    compare_results("INT_MIN/MAX test", ret_orig, ret_ft);
    
    printf("\n===================================\n");
    printf("       TESTING COMPLETE!          \n");
    printf("===================================\n");
    
    return 0;
}