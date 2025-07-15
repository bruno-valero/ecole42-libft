/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/14 13:55:20 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*target;
	unsigned char	*origin;

	target = dest;
	origin = src;
	i = -1;
	if (dest < src)
	{
		while (++i < n)
			target[i] = origin[i];
	}
	else
	{
		i = n;
		while (--i > 0)
			target[i] = origin[i];
	}
	return (dest);
}
