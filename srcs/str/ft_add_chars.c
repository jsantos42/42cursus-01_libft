#include "../../include/libft.h"

char	*ft_add_chars(char *original, char c, size_t instances)
{
	char	*new;
	size_t	strlen;
	size_t	iter;

	strlen = ft_strlen(original) + instances;
	new = malloc(strlen + 1);
	if (!new)
		return (NULL);
	iter = 0;
	while (original[iter] != '\0')
	{
		new[iter] = original[iter];
		iter++;
	}
	while (iter < strlen)
	{
		new[iter] = c;
		iter++;
	}
	new[iter] = '\0';
	free(original);
	return (new);
}
