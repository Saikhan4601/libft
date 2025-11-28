/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadavaas <sadavaas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 23:41:32 by sadavaas          #+#    #+#             */
/*   Updated: 2025/11/28 00:25:01 by sadavaas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen1(const char *str)
{
	size_t	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen1(src);
	dstlen = ft_strlen1(dst);
	if (size <= dstlen)
		return (srclen + size);
	i = 0;
	while (src[i] != '\0' && ((dstlen + i) < (size - 1)))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	dstcom[20] = "Hello World!";
// 	char	dstft[40] = "Hello World!";
// 	size_t function = ft_strlcat(dstft, "123456789", 40);
// 	printf("%s\n", dstft);
// 	printf("%zu\n", function);ft_strlcat(dstft, "123456789", 40)
// }