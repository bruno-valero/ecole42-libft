/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/23 08:55:25 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst->next)
	{
		f(lst->content);
		lst = lst->next;
	}
	if (lst)
		f(lst->content);
}

// #include <stdio.h>
// #include <string.h>
// #include <limits.h>
// int main()
// {
// 	char src[] = "coucou";
// 	char dest[10]; memset(dest, 'A', 10);
// 	int teste = INT_MAX;
// 	printf("%d\n", ft_strlcpy(dest, src, -1) == strlen(src));
// 	// printf("%d\n", teste++);
// 	// printf("%d\n", teste);
// }
