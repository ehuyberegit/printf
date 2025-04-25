/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:23:53 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 16:23:56 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
int main(void)
{
	int i = 0;
	
    printf("\nTesting ft_isalnum:\n");
    
    char test_chars[] = 
	{   
		'a', 
		'Z', 
		'0', 
		'9', 
		' ', 
		'@', 
		'\0', 
		127
	};
    
    while (test_chars[i] || i == 7)
    {
        printf("'%c': ft_isalnum = %d, isalnum = %d\n", 
               test_chars[i] ? test_chars[i] : '\\', 
               ft_isalnum(test_chars[i]), isalnum(test_chars[i]));
			   i++;
    }
    printf("\n");
    return 0;
}
*/
