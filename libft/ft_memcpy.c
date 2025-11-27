/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadavaas <sadavaas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:39:56 by sadavaas          #+#    #+#             */
/*   Updated: 2025/11/19 21:53:23 by sadavaas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*td;
	unsigned char	*ts;

	if (!dest && !src)
		return (0);
	td = (unsigned char *)dest;
	ts = (unsigned char *)src;
	while (n != 0)
	{
		*td = *ts;
		td++;
		ts++;
		n--;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str1[] = "Geeks";
//     char str2[6] = "";
// 	ft_memcpy(str2, str1, 5);

//     printf("str2 after memcpy:");
//     printf("%s\n",str2);

//     return 0;
// }