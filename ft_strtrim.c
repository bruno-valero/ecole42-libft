/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/21 21:13:09 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 

	ESSSA IMPLEMENTACAO ESTA ERRADA PORQUE ESTOU FAZENDO COMO SE FOSSE UM SPLIT, 
	MAS ESTA TRIM DEVE APENAS RETIRAR OPS CARACTERES DO INICIO E FINAL DA PAAVRA E NAO DO MEIO

 */

int		is_valid_char(char c, char const *set);
void	get_coordinates(char const *s1, char const *set, int data[2]);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		data[2];
	char	*str;

	get_coordinates(s1, set, data);
	str = malloc(data[1] - data[0] + 2);
	i = 0;
	while (data[0] <= data[1])
		str[i++] = s1[data[0]++];
	return (str);
}

void	get_coordinates(char const *s1, char const *set, int data[2])
{
	int	len_data;
	int	i;

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

#include <stdio.h>
int main()
{
	printf("strtrim:%s", ft_strtrim("@ teste&* s@* d ###!!", "@ &*$#!"));
}
