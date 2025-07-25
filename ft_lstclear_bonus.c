/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/25 15:31:32 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	lst_remove_one(t_list *lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (lst && del)
	{
		if (lst[0])
		{
			current = lst[0];
			next = current->next;
			while (current && current->next)
			{
				ft_lstdelone(current, del);
				current = next;
				if (current && current->next)
					next = current->next;
			}
			if (current)
				ft_lstdelone(current, del);
			lst[0] = (void *)0;
		}
	}
}

// static void	lst_remove_one(t_list *lst, void (*del)(void *))
// {
// 	lst->next = (void *)0;
// 	ft_lstdelone(lst, del);
// }

// #include <stdio.h>
// #include <string.h>
// #include <limits.h>
// int main()
// {
// 	ft_lstclear(0, 0);
// }
