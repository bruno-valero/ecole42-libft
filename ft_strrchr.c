/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/14 16:36:46 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	last_position;
	int	i;

	last_position = -1;
	i = -1;
	while (s[++i])
	{
		if (s[i] == c)
			last_position = i;
	}
	if (s[i] == c)
			last_position = i;
	if (last_position == -1)
		return ((void *)0);
	return ((char *)&s[last_position]);
}
