/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/23 11:33:43 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	total_bytes;
	int	i;
	int	len_dst;
	int	len_src;

	if ((!dst || !src) && !size)
		return (0);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	total_bytes = size - len_dst - 1;
	if (size <= (size_t)len_dst || !size)
		return (len_src + size);
	i = -1;
	while (src[++i] && len_dst + (size_t)i < size - 1)
		dst[len_dst + i] = src[i];
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
