#include "libft.h"
// #include <stdio.h>
void *ft_memset(void *a, int c, size_t len)
{
    size_t n;
    char *str;

    n = 0;
    str = a;

    while(n < len)
    {
        str[n] = c;
        n++;
    }
    return(a);
}

// int main(void)
// {
    
//     char str[10] = "123456789";
//     printf("%s\n", ft_memset(str, 'a', 5));

//     printf("Len: %s | Returned Ptr: %p\n", ft_memset(str + 3, 'X', 1), str);

// }
