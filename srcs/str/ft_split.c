/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:23 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:21:12 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static size_t	ft_strcounter(const char *s1, char splitter);
static char		**fill_matrix(char *str, char c, int str_count);
static size_t	get_end_index(const char *str, char stop);

/*
**	Parameters:
**	1. The string to be split.
**	2. The delimiter character.
**	3. The number of strings, in case it is relevant to get; otherwise, one
**	could just pass NULL (note that there's an if condition to protect against
**	that case).
**
**	Allocates and returns an array of strings obtained by splitting ’s’ using
**	the character ’c’ as a delimiter.
**	It returns the array of new strings resulting from the split, or NULL if
**	the allocation fails.
*/

char	**ft_split(char *str, char c, int *nb_str)
{
	int		str_count;
	char	**matrix;

	if (!str)
		return (NULL);
	str_count = ft_strcounter(str, c);
	matrix = fill_matrix(str, c, str_count);
	if (nb_str)
		*nb_str = str_count;
	return (matrix);
}

static size_t	ft_strcounter(const char *s1, char splitter)
{
	size_t	flag;
	size_t	strings;

	flag = 0;
	strings = 0;
	while (*s1)
	{
		if (*s1 != splitter && flag == 0)
		{
			strings += 1;
			flag = 1;
		}
		else if (*s1 == splitter)
			flag = 0;
		s1++;
	}
	return (strings);
}

static char	**fill_matrix(char *str, char c, int str_count)
{
	char	**matrix;
	int		i;
	int		end;

	matrix = (char **)malloc(sizeof(char *) * (str_count + 1));
	if (!matrix)
		return (NULL);
	i = 0;
	while (i < str_count && *str)
	{
		if (*str == c)
			str++;
		else
		{
			end = get_end_index(str, c);
			matrix[i] = ft_substr(str, 0, end);
			if (!matrix[i])
				free_matrix((void **)matrix, i);
			i++;
			str += end;
		}
	}
	matrix[i] = NULL;
	return (matrix);
}

static size_t	get_end_index(const char *str, char stop)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != stop)
		len++;
	return (len);
}
