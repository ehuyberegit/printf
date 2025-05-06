#include "ft_printf.h"

// gcc -Wall -Wextra -Werror *.c libft/*.c

int main(void)
{
    void 	*i = 0;

    ft_printf("Your implementation: %p %p\n", i, i);
    printf("Standard printf: %p %p\n", i, i);
    
    return (0);
}