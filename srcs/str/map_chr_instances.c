#include "../../include/libft.h"

/*
**	Returns an array containing the indexes of the chr instances in str.
**	Note: on the calling function, make sure to check for a failed malloc (this
**	happens when it returns NULL but nb_instances != 0).
*/

int	*map_chr_instances(char *str, char chr, size_t *nb_instances)
{
	int		*positions;
	int		iter;
	int		jter;

	*nb_instances = count_chr_instances(str, chr);
	if (!ft_array_malloc(&positions, (sizeof(int) * *nb_instances)))
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

int	count_chr_instances(char *str, char chr)
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
