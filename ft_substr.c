/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/18 19:48:59 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_smaller(int n1, int n2);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		size;
	int		len_str;
	char	*sub;

	len_str = ft_strlen(s);
	if (!s)
		return ((void *)0);
	if (!(s[start]))
		return (((void *)0));
	size = len - (size_t)start;
	if (size == 0 && len > 0)
		size++;
	sub = (char *)malloc(get_smaller(size, len_str) + 1);
	ft_bzero(sub, get_smaller(size, len_str) + 1);
	while ((start < len) && s[start])
	{
	sub[start] = s[start];
	start++;
	}
	return (sub);
}

int	get_smaller(int n1, int n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s\n", ft_substr("tripouille", 0, 42000));
// 	printf("%s\n", ft_substr("tripouille", 1, 1));
	
// }
