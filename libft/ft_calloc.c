/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:31:30 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 16:01:20 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	total_size;

	if (count == 0 || size == 0)
	{
		memory = malloc(0);
		return (memory);
	}
	if (size > 0 && count > SIZE_MAX / size)
		return (NULL);
	total_size = count * size;
	memory = (char *)malloc(total_size);
	if (memory == NULL)
	{
		return (NULL);
	}
	ft_bzero(memory, total_size);
	return (memory);
}

/*
int main(void)
{
	int i = 0;
	
    void *ptr = ft_calloc(0, sizeof(int));
    printf("\nZero allocation test: pointer is %s\n", 
           ptr != NULL ? "not NULL (correct)" : "NULL");
    free(ptr);
    
    int *numbers = (int *)ft_calloc(5, sizeof(int));
    if (numbers == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
	
    printf("\nValues after calloc:\n\n");
    while (i < 5)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
		i++;
    }
    
    numbers[0] = 10;
    numbers[2] = 20;
    
    printf("\nValues after modification:\n\n");
	i = 0;
    while (i < 5)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
		i++;
    }
    printf("\n");
    free(numbers);
    
    return 0;
}
*/
