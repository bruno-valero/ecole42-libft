/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/21 08:37:40 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*target;
	unsigned char	*origin;

	if (dest == NULL || src == NULL)
		return (NULL);
	target = (unsigned char *)dest;
	origin = (unsigned char *)src;
	i = -1;
	if (dest < src)
		while (++i < n)
			target[i] = origin[i];
	else
	{
		i = n;
		while (--i >= 0)
		{
			target[i] = origin[i];
			if (i == 0)
				break ;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	// char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	int sResult[] = {670, 6875, 647, 568, 869, 1000, 945};
// 	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

// 	ft_memmove(sResult + 1, sResult, 2);
// 	int i = -1;
// 	while (++i < 7)
// 		printf("%s\n", ft_itoa(sResult[i]));

// 	// printf("%d\n", ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7));
// }
