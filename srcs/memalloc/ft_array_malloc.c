/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_malloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:04 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:19:04 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_array_malloc(int **array, size_t size)
{
	*array = NULL;
	*array = malloc(sizeof(int) * size);
	if (!*array)
		return (0);
	else
		return (1);
}
