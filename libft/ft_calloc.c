#include "libft.h"


void	*ft_calloc(size_t count, size_t size)
{
    size_t	sum;
	void	*p;
    
	sum = count * size;
	p = malloc(sum);
	if (p == 0)
    	return (NULL);
	ft_memset(p, 0, sum);
	return (p);
}

// size_t i;
// i = 0;
// while (i < sum)
//         p[i++] = 0;
// calloc will set memory to 0 first
// returning void