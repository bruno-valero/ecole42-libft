/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/18 09:31:37 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char c)
{
	unsigned char	character;

	character = (unsigned char)c;
	return (character >= 0 && character <= 127);
}
