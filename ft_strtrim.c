/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/16 19:40:31 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		identify_chars(char const *s1, char const *set, int start_from_end);
void	identify_chars_add(int start_from_end, int *i_ex);
void	exclude_chars(char *s1, char *new_str, int len_begin, int len_end);
void	handle_find_char(int *found_total, int *found_one);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		size;
	int		chars_to_rm;
	int		len_s1;

	len_s1 = ft_strlen((char *)s1);
	chars_to_rm = identify_chars(s1, set, 0) + identify_chars(s1, set, 1);
	size = len_s1 - chars_to_rm;
	str = malloc(size + 1);
	ft_bzero(str, size + 1);
	exclude_chars((char *)s1, str,
		identify_chars(s1, set, 0) - 1,
		len_s1 - 1 - identify_chars(s1, set, 1));
	return (str);
}

int	identify_chars(char const *s1, char const *set, int start_from_end)
{
	int	i_ex;
	int	i_in;
	int	found_total;
	int	found_one;

	found_total = 0;
	i_ex = 0;
	if (start_from_end)
		i_ex = ft_strlen((char *)s1) - 1;
	while (i_ex >= 0 && s1[i_ex])
	{
		found_one = 0;
		i_in = -1;
		while (set[++i_in])
		{
			if (set[i_in] == s1[i_ex])
				handle_find_char(&found_total, &found_one);
		}
		if (!found_one)
			break ;
		identify_chars_add(start_from_end, &i_ex);
	}
	return (found_total);
}

void	exclude_chars(char *s1, char *new_str, int len_begin, int len_end)
{
	int	i;
	int	str_i;

	i = -1;
	str_i = 0;
	while (s1[++i] && i <= len_end)
	{
		if (i >= len_begin && i <= len_end)
			new_str[str_i++] = s1[i];
	}
}

void	identify_chars_add(int start_from_end, int *i_ex)
{
	if (start_from_end)
		(*i_ex)--;
	else
		(*i_ex)++;
}

void	handle_find_char(int *found_total, int *found_one)
{
	(*found_total)++;
	(*found_one) = 1;
}

int main()
{
	printf("strtrim:%s", ft_strtrim("@ teste&* s@* d ###!!", "@ &*$#!"));
}
