/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/23 11:11:39 by brunofer         ###   ########.fr       */
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
