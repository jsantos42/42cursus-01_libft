#include "../../include/libft.h"

int	ft_str_malloc(char **str, size_t length)
{
	*str = NULL;
	*str = malloc(sizeof(char) * (length + 1));
	if (!*str)
		return (0);
	else
		return (1);
}
