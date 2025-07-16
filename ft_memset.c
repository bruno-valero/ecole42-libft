/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/16 12:03:00 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char			number;
	size_t					i;
	unsigned char			*ptr;

	number = (unsigned char)c;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
		ptr[i++] = number;
	return (s);
}

#include <stdio.h>
int main()
{
	int number = 8;
	int *ptr = &number;
	void *outro_ptr;
	outro_ptr = (void *)ptr;
	printf("inteiro = %d\nponteiro = %p\noutro ponteiro = %p", number, ptr, outro_ptr);
}
