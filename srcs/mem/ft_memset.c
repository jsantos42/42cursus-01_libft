/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:00 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:19:00 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*string;
	size_t			i;

	string = b;
	i = 0;
	while (i < len)
		string[i++] = c;
	return (b);
}
