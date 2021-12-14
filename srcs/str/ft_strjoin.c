/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:28 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:19:28 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!(s1 && s2))
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	joined = (char *)malloc((len + 1));
	if (!joined)
		return (0);
	i = 0;
	j = 0;
	while (i < len && s1[j] != 0)
		joined[i++] = s1[j++];
	j = 0;
	while (i < len && s2[j] != 0)
		joined[i++] = s2[j++];
	joined[i] = '\0';
	return (joined);
}
