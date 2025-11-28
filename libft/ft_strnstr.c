/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadavaas <sadavaas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 04:45:21 by sadavaas          #+#    #+#             */
/*   Updated: 2025/11/28 05:34:09 by sadavaas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	if (*little == '\0')
		return ((char *)big);
	little_len = 0;
	while (little[little_len] != '\0')
		little_len++;
	i = 0;
	while (big[i] != '\0' && i < len && (len - i) >= little_len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] != '\0'
			&& little[j] != '\0' && (i + j) < len)
		{
			j++;
		}
		if (j == little_len)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = "to find a word in a sentences";
// 	char	substr[] = "word";
// 	int	n = 18;

// 	printf("ft_strnstr: %s\n", ft_strnstr(str, substr, n));
// }