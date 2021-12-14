/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_if_not_null.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:01 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:19:02 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
**	Frees the pointer passed as an argument and returns NULL to set that pointer
**	to NULL.
*/

void	*free_if_not_null(void *pointer)
{
	if (pointer != NULL)
		free(pointer);
	return (NULL);
}
