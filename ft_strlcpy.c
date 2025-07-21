/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/21 18:19:42 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!size)
		return ((size_t)ft_strlen((char *)src));
	i = -1;
	while (++i < size - 1 && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return ((size_t)ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// #include <limits.h>
// int main()
// {
// 	char src[] = "coucou";
// 	char dest[10]; memset(dest, 'A', 10);
// 	int teste = INT_MAX;
// 	printf("%d\n", ft_strlcpy(dest, src, -1) == strlen(src));
// 	// printf("%d\n", teste++);
// 	// printf("%d\n", teste);
// }
