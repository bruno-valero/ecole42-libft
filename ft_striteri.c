/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 08:33:27 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/22 15:26:45 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = -1;
	while (s[++i])
		f(i, &s[i]);
}

// #include <stdio.h>
// int main ()
// {
// 	// printf("%d", nbrlen(13000));
// 	printf("%s", ft_strmapi(-1587));
// }
