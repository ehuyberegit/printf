/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 10:39:23 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 11:46:05 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *mem, size_t size)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (char *)mem;
	while (i < size)
	{
		temp[i] = '\0';
		i++;
	}
}

/*
int main(void)
{
    char str[] = "Coucou";
	size_t j = 0;
    
	printf("\n\n");
    printf("Before bzero: %s\n", str);
    ft_bzero(str, 4);
    printf("After bzero: ");
    
    while (j < sizeof(str) - 1)
    {
        if (str[j] == '\0')
            printf("_");
        else
            printf("%c", str[j]);
		j++;
    }
    printf("\n\n");
    return (0);
}
*/