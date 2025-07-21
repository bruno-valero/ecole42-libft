/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/21 20:03:38 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	is_valid_char(char c, char const *set);
int	*get_coordinates(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int	*data;

	data = get_coordinates(s1, set);
}

int	*get_coordinates(char const *s1, char const *set)
{
	int	*data;
	int	len_data;
	int	i;

	data = malloc(2 * sizeof(int));
	len_data = 0;
	i = -1;
	while (s1[++i])
	{
		if (!i && is_valid_char(s1[i], set))
			data[len_data++] = i;
		if (is_valid_char(s1[i - 1], set) && !is_valid_char(s1[i], set))
			data[len_data++] = i;
		if (!is_valid_char(s1[i - 1], set) && is_valid_char(s1[i], set))
			data[len_data++] = i;
		if (is_valid_char(s1[i], set) && !s1[i + 1])
			data[len_data++] = i;
	}
}

int	is_valid_char(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (0);
	return (1);
}

// int main()
// {
// 	printf("strtrim:%s", ft_strtrim("@ teste&* s@* d ###!!", "@ &*$#!"));
// }
