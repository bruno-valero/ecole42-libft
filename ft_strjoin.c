/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/21 19:41:18 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		len1;
	int		len2;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	str = malloc(len1 + len2 + 1);
	i = -1;
	while (++i < len1 + len2)
	{
		if (s1[i] && i <= len1)
			str[i] = s1[i];
		else
			str[i] = s2[i - len1];
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *s = ft_strjoin("tripouille", "42");
// 	printf("%s\n", s);
// 	printf("%d\n", !strcmp(s, "tripouille42"));
// }
