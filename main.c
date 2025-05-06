#include "ft_printf.h"

// gcc -Wall -Wextra -Werror *.c libft/*.c

int main(void)
{
    int	i = 10;

    ft_printf("Your implementation: %i\n", i);
    printf("Standard printf: %i\n", i);
    
    return (0);
}