/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadavaas <sadavaas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 00:29:56 by sadavaas          #+#    #+#             */
/*   Updated: 2025/11/28 03:39:53 by sadavaas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	str;
	int				i;

	i = 0;
	str = c;
	while (s[i] != str)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)&s[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s[] = "Hello, World!";
//   	// Finding the first occurence of 'o' in string s
//     char *res = strchr(s, 'o');
//     if (res != NULL)
//         printf("Character found at: %ld index\n", res - s);
//     else
//         printf("Character not found\n");
// 	printf("MINE: %s\n", ft_strchr(s, 'o'));
// 	return 0;
// }