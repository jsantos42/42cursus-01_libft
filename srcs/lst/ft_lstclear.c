/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:18:34 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:18:34 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
**  https://www.geeksforgeeks.org/linked-list-set-1-introduction/
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst != 0)
	{
		while (*lst)
		{
			temp = (**lst).next;
			ft_lstdelone(*lst, del);
			*lst = temp;
		}
	}
}
