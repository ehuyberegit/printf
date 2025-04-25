/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 10:01:31 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/21 15:51:05 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_skip(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
	{
		i ++;
	}
	return (i);
}

int	ft_sign(const char *str, int *i)
{
	int	sign;

	sign = 1;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
		{
			sign = -1;
		}
		(*i)++;
	}
	return (sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	i = ft_skip(str);
	sign = ft_sign(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
/*
int main(void)
{
	int i = 0;
    const char *test_cases[] = 
	{
        "0",
        "123",
        "-123",
        "+123",
        "  -123",
        "+-123",
        "--123",
        "123abc",
        "2147483647",
        "-2147483648",
        NULL
    };
    
    while (test_cases[i] != NULL)
    {
		printf("\n");
        printf("Input: \"%s\"\n", test_cases[i]);
        printf("Standard atoi: %d\n", atoi(test_cases[i]));
        printf("Your ft_atoi: %d\n", ft_atoi(test_cases[i]));
		i++;
    }
    printf("\n");
    return (0);
}
*/
