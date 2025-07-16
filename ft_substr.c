/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/16 09:01:34 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		size;
	char	*sub;

	if (start == len || !(s[start]))
		return (((void *)0));
	size = len - (size_t)start;
	sub = (char *)malloc(size + 1);
	ft_bzero(sub, size + 1);
	while (start < len)
		sub[start++] = s[start];
	return (sub);
}
