#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}


// #include <stdio.h>
// int main(void)
// {
//     char str[10] = "123456789";
//     ft_bzero(str + 3, 4);

//     printf("After bzero: \n");
//     printf("Check (0-2): %c%c%c\n", str[0], str[1], str[2]);
//     printf("Check (3-6): %d %d %d %d\n", str[3], str[4], str[5], str[6]);
//     printf("Check (7-8): %c%c\n", str[7], str[8]);
// }