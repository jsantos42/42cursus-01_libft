#include "../../include/libft.h"

/*
**	Parameters:
**	1. The string to be split.
**	2. The delimiter character.
**	
**	Allocates and returns an array of strings obtained by splitting ’s’ using
**	the character ’c’ as a delimiter.
**	It returns the array of new strings resulting from the split, or NULL if
**	the allocation fails.
*/

static size_t	ft_strcounter(const char *s1, char splitter);
static size_t	get_end_index(const char *str, char stop);

char	**ft_split(char const *str, char c, int *str_count)
{
	char	**array;
	int		string_i;
	int		end;

	if (!str)
		return (NULL);
	*str_count = ft_strcounter(str, c);
	array = (char **)malloc(sizeof(char *) * (*str_count + 1));
	if (!array)
		return (NULL);
	string_i = 0;
	while (string_i < *str_count && *str)
	{
		if (*str == c)
			str++;
		else
		{
			end = get_end_index(str, c);
			array[string_i] = ft_substr(str, 0, end);
			if (!array[string_i])
				ft_free_matrix((void**)array, string_i);
			string_i++;
			str += end;
		}
	}
	array[string_i] = NULL;
	return (array);
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

static size_t	get_end_index(const char *str, char stop)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != stop)
		len++;
	return (len);
}
