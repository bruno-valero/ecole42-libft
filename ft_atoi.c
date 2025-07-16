/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/16 08:30:05 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <limits.h>

// int	ft_isdigit(char c)
// {
// 	return (c >= '0' && c <= '9');
// }

int	ft_atoi(const char *nptr)
{
	int	result;
	int	i;
	int	sign;

	while (*nptr == ' ')
		nptr++;
	sign = 1;
	if (nptr[0] == '-')
	{
		sign = -1;
		nptr++;
	}
	result = 0;
	i = -1;
	while (nptr[++i])
	{
		if (!ft_isdigit(nptr[i]))
			return (result * sign);
		result = result * 10 + (nptr[i] - '0');
	}
	return (result * sign);
}

// int	main(void)
// {
// 	printf("ft_atoi: %d\n", ft_atoi("        -2147483649"));
// 	printf("atoi: %d\n", atoi("        -2147483649"));
// 	printf("int: %d\n", (INT_MAX));
// }
