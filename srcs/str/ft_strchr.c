/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:26 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:19:26 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	loc;
	int		i;

	loc = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == loc)
			break ;
		else
			i++;
	}
	if (s[i] == '\0' && loc != '\0')
		return (0);
	else
		return (&((char *)s)[i]);
}
