/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:49:18 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/18 07:13:20 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nbrlen(int n);
void	strreverse(char *str);
void	handle_negative(int *is_negative, int *n);

char	*ft_itoa(int n)
{
	int		i;
	int		temp;
	int		is_negative;
	char	*nbr;

	if (n == 0)
		return ("0\0");
	if (n == -2147483648)
		return ("-2147483648\0");
	nbr = malloc(nbrlen(n) + 1);
	i = 0;
	handle_negative(&is_negative, &n);
	while (n > 0)
	{
		temp = n % 10;
		nbr[i++] = temp + '0';
		n = n / 10;
	}
	if (is_negative)
		nbr[i++] = '-';
	strreverse(nbr);
	nbr[i] = '\0';
	return (nbr);
}

int	nbrlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len ++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	strreverse(char *str)
{
	int		i;
	int		len;
	char	temp;

	len = ft_strlen(str);
	i = -1;
	while (++i < len)
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;
		len--;
	}
}

void	handle_negative(int *is_negative, int *n)
{
	*is_negative = 0;
	if (*n < 0)
	{
		*n = *n * -1;
		*is_negative = 1;
	}
}

// #include <stdio.h>
// #include <limits.h>
// int main ()
// {
// 	// printf("%d", nbrlen(13000));
// 	printf("%s", ft_itoa(INT_MIN));
// }
