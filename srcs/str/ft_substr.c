/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:39 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:19:39 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size;
	size_t	iter;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start > size)
		size = 0;
	if (size > len)
		size = len;
	sub = (char *)malloc((size + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	iter = 0;
	if (size != 0)
		while (iter < len && s[start] != 0)
			sub[iter++] = s[start++];
	sub[iter] = '\0';
	return (sub);
}
