/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/23 09:41:16 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**newlist;
	t_list	*temp;

	if (!lst || !f || !del)
		return ((void *)0);
	newlist = ft_calloc(1, sizeof(t_list));
	if (!newlist)
		return ((void *)0);
	temp = newlist[0];
	temp->content = f(lst->content);
	while (lst->next)
	{
		temp->next = ft_calloc(1, sizeof(t_list));
		if (!temp->next)
		{
			ft_lstclear(newlist, del);
			return ((void *)0);
		}
		lst = lst->next;
		temp->next->content = f(lst->content);
		temp = temp->next;
	}
	return (newlist[0]);
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
