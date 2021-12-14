/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:29 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:19:29 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	output;

	output = ft_strlen(src);
	if (dstsize != 0)
	{
		i = ft_strlen(dst);
		if (i <= dstsize)
		{
			output += i;
			j = 0;
			while (src[j] != '\0' && i < dstsize - 1)
				dst[i++] = src[j++];
			dst[i] = '\0';
		}
		else
			output += dstsize;
	}
	return (output);
}
