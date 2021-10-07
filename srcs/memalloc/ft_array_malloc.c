#include "../../include/libft.h"

int	ft_array_malloc(int **array, size_t size)
{
	*array = NULL;
	*array = malloc(sizeof(int) * size);
	if (!*array)
		return (0);
	else
		return (1);
}
