/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/21 19:20:33 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_smaller(int n1, int n2);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		size;
	int		len_str;
	char	*sub;

	len_str = ft_strlen(s);
	if (!s || (start > (unsigned int)len_str))
	{
		sub = (char *)malloc(1);
		sub[0] = '\0';
		return (sub);
	}
	if (len < (len_str - start))
		size = len;
	else
		size = len_str - start;
	sub = (char *)malloc(size + 1);
	if (!sub)
		return (((void *)0));
	i = 0;
	while ((i < size) && s[start])
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

// #include <stdio.h>
// int main()
// {
// 	char *s = ft_substr("tripouille", 0, 42000);
// 	s = ft_substr("tripouille", 100, 1);
// 	// printf("%s\n", ft_substr("tripouille", 0, 42000));
// 	printf("%s\n", s);
// 	// printf("%s\n", ft_substr("tripouille", 1, 1));
// }
