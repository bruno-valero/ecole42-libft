/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:49:18 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/23 12:50:33 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static char	**create_array(char const *s, int	*data, int data_len);
static void	free_split(char **str, int end);

char	**ft_split(char const *s, char c)
{
	int	*data;
	int	data_count;
	int	i;

	if (!s)
		return (NULL);
	data = (int *)ft_calloc(ft_strlen((char *)s), sizeof(int));
	if (!data)
		return (NULL);
	data_count = 0;
	i = -1;
	while (s[++i])
	{
		if ((i == 0) && (s[i] != c))
			data[data_count++] = i;
		else if ((i > 0) && (s[i] != c) && (s[i - 1] == c))
			data[data_count++] = i;
		else if ((i > 0) && (s[i] == c && s[i - 1] != c))
			data[data_count++] = i - 1;
		else if ((s[i] != c && s[i + 1] == '\0'))
			data[data_count++] = i;
	}
	if (data_count % 2 != 0)
			data[data_count++] = i - 1;
	return (create_array(s, data, data_count));
}

static char	**create_array(char const *s, int	*data, int data_len)
{
	char	**array;
	int		i_words;
	int		i_src;
	int		i_current_word;

	array = (char **)ft_calloc((data_len / 2) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	i_words = -1;
	while (++i_words < (data_len / 2))
	{
		array[i_words] = malloc(data[i_words * 2 + 1] - data[i_words * 2] + 2);
		if (!array[i_words])
		{
			free_split(array, i_words - 1);
			return (NULL);
		}
		i_src = data[i_words * 2];
		i_current_word = 0;
		while (i_src <= data[i_words * 2 + 1])
			array[i_words][i_current_word++] = s[i_src++];
		array[i_words][i_current_word] = '\0';
	}
	free(data);
	array[i_words] = (void *)0;
	return (array);
}

static void	free_split(char **str, int end)
{
	while (end >= 0)
	{
		ft_bzero(str[end], ft_strlen(str[end]));
		free(str[end]);
		end--;
	}
	free(str);
}

// #include <stdio.h>
// int main ()
//
// 	// ft_split("Ola tudo bem? ", ' ');
// 	// printf("%s\n", ft_split("Ola tudo bem? ", ' ')[0]);
// 	// printf("%s\n", ft_split("Ola tudo bem? ", ' ')[1]);
// 	// printf("%s\n", ft_split("Ola tudo bem? ", ' ')[2]);
// 	// printf("%s\n\n", ft_split("Ola tudo bem? ", ' ')[3]);
// 	//
// 	// printf("%d\n", ft_split("  tripouille  42  ", ' ')[2] == NULL);
// 	// printf("%d\n", ft_split("tripouille", 0)[1] == NULL);
// 	printf("%c\n", ft_split("tripouille", 0)[0][0]);
// }
