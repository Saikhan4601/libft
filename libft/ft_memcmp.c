/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadavaas <sadavaas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 04:34:01 by sadavaas          #+#    #+#             */
/*   Updated: 2025/11/28 04:44:39 by sadavaas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	s1[] = "hellohello";
// 	char	s2[] = "hello12345";
// 	int	n = 8;

// 	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
// 	printf("memcmp: %d\n", memcmp(s1, s2, n));
// }