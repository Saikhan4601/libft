/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadavaas <sadavaas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 22:20:17 by sadavaas          #+#    #+#             */
/*   Updated: 2025/11/28 00:23:19 by sadavaas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	if (size == 0)
		return (srclen);
	srclen = 0;
	while (src[srclen])
		srclen++;
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	dstcom[20] = "Hello World!";
// 	char	dstft[20] = "Hello World!";
// 	ft_strlcpy(dstft, "123456789", 5);
// 	printf("%s\n",dstft);
// 	printf("%zu\n",ft_strlcpy(dstft, "123456789", 5));
// }