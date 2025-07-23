/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/23 08:16:25 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	lst_remove_one(t_list *lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (lst && del)
	{
		current = lst[0];
		next = current->next;
		while (current && current->next)
		{
			lst_remove_one(current, del);
			current = next;
			if (current && current->next)
				next = current->next;
		}
		if (current)
			lst_remove_one(current, del);
		lst[0] = (void *)0;
	}
}

static void	lst_remove_one(t_list *lst, void (*del)(void *))
{
	lst->next = (void *)0;
	ft_lstdelone(lst, del);
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
