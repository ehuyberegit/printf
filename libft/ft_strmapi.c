/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:16:24 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 11:57:47 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*result;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
char make_uppercase(unsigned int i, char c)
{
    if (i % 2 == 0)
        return ft_toupper(c);
    return c;
}

int main(void)
{
    char *str = "abcdefghijklm";
    char *result;
    
    printf("Original: %s\n", str);
    
    result = ft_strmapi(str, &make_uppercase);
    
    printf("Modified: %s\n", result);
    
    free(result);
    
    return (0);
}
*/