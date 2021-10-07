#include "../../include/libft.h"

/*
**	Returns an array containing the indexes of the chr occurrences in str.
*/

int	*map_chr_occurrences(char *str, char chr)
{
	size_t	size;
	int		*positions;
	int		iter;
	int		jter;

	size = count_chr_occurrences(str, chr);
	if (!ft_array_malloc(&positions, (sizeof(int) * size)))
		return (NULL);
	iter = -1;
	while (str[++iter] != '\0')
	{
		jter = -1;
		if (str[iter] == chr)
			positions[++jter] = iter;
	}
	return (positions);
}

/*
**	Finds every instance of the given char chr in the string str and returns the
**	instance count.
*/

int	count_chr_occurrences(char *str, char chr)
{
	int	count;
	int	iter;

	count = 0;
	iter = -1;
	while (str[++iter] != '\0')
	{
		if (str[iter] == chr)
			count++;
	}
	return (count);
}
