/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/22 16:41:14 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear_useless(const char **nptr);
static void	handle_signs(const char **nptr, int *sign);

int	ft_atoi(const char *nptr)
{
	int	result;
	int	i;
	int	sign;

	clear_useless(&nptr);
	handle_signs(&nptr, &sign);
	result = 0;
	i = -1;
	while (ft_isdigit(nptr[++i]))
		result = result * 10 + (nptr[i] - '0');
	return (result * sign);
}

static void	clear_useless(const char **nptr)
{
	while ((**nptr == ' ' || **nptr > 1) && **nptr < 31)
		*nptr = *nptr + 1;
}

static void	handle_signs(const char **nptr, int *sign)
{
	*sign = 1;
	if (*nptr[0] == '-' || *nptr[0] == '+')
	{
		if (*nptr[0] == '-')
			*sign = -1;
		*nptr = *nptr + 1;
	}
}

// #include <stdio.h>
// #include <limits.h>

// int	main(void)
// {
// 	printf("ft_atoi: %d\n", ft_atoi("        +214"));
// 	printf("atoi: %d\n", atoi("        +214"));
// }
