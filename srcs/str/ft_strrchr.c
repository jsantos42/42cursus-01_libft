/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:36 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:19:36 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*string;
	char	loc;
	int		len;

	string = (char *)s;
	loc = (char)c;
	len = ft_strlen(string);
	string += len;
	if (loc == '\0')
		return (string);
	while (len > 0)
	{
		if (*(--string) == loc)
			return (string);
		len--;
	}
	return (0);
}
