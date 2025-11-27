/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadavaas <sadavaas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:12:07 by sadavaas          #+#    #+#             */
/*   Updated: 2025/11/27 21:41:11 by sadavaas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//overlapping
// str[2 + n]
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*td;
	unsigned char	*ts;

	if (!dest && !src)
		return (0);
	td = (unsigned char *)dest;
	ts = (unsigned char *)src;
	if (td > ts)
	{
		while (n > 0)
		{
			n--;
			td[n] = ts[n];
		}
	}
	else
	{
		while (n != 0)
		{
			*td = *ts;
			td++;
			ts++;
			n--;
		}
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[100] = "12345678901234567890";
// 	                //    "12345678901234567890"

// 	ft_memmove(str + 2, str, 5);
// 	printf("%s\n", str);
// 	return (0);
// }