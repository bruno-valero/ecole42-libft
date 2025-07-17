/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:49:18 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/17 19:49:21 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**create_array(char const *s, int	*data, int data_len);

char	**ft_split(char const *s, char c)
{
	int	*data;
	int	data_count;
	int	i;

	data = (int *)malloc(ft_strlen((char *)s) * sizeof(int));
	data_count = 0;
	i = -1;
	while (s[++i])
	{
		if ((i > 0) && (s[i] != c) && (s[i - 1] == c))
			data[data_count++] = i;
		else if ((i > 0) && (s[i] == c) && (s[i - 1] != c))
			data[data_count++] = i - 1;
		else if ((i == 0) && (s[i] != c))
			data[data_count++] = i;
	}
	return (create_array(s, data, data_count));
}

char	**create_array(char const *s, int	*data, int data_len)
{
	char	**array;
	int		i_ex;
	int		i_in;
	int		i_arr;

	array = malloc(((data_len / 2) * sizeof(char *)) + (1 * sizeof(char *)));
	i_ex = -1;
	while (++i_ex < (data_len / 2))
	{
		array[i_ex] = malloc(data[i_ex * 2 + 1] - data[i_ex * 2] + 2);
		i_in = data[i_ex * 2];
		i_arr = 0;
		while (i_in <= data[i_ex * 2 + 1])
			array[i_ex][i_arr++] = s[i_in++];
	}
	array[i_ex] = "\0";
	return (array);
}

// #include <stdio.h>
// int main ()
// {
// 	// ft_split("Ola tudo bem? ", ' ');
// 	printf("%s", ft_split("Ola tudo bem? ", ' ')[3]);
// }
// 