/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadavaas <sadavaas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 04:08:59 by sadavaas          #+#    #+#             */
/*   Updated: 2025/11/28 04:32:23 by sadavaas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	search_c;

	str = (unsigned char *)s;
	search_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == search_c)
			return (&str[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char   *s = "helleluya bomb force buy gallil ak";
// 	int   c = 'o';
// 	size_t   n = 13;
// 	printf("ft_memchr: %p\n", ft_memchr(s, c, n));
// 	printf("memchr: %p\n", memchr(s, c, n));
// }