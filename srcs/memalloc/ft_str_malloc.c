/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_malloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:06 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:19:06 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_str_malloc(char **str, size_t length)
{
	*str = NULL;
	*str = malloc(sizeof(char) * (length + 1));
	if (!*str)
		return (0);
	else
		return (1);
}
