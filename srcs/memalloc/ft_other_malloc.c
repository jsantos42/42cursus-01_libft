#include "../../include/libft.h"

int	ft_other_malloc(void **other)
{
	*other = NULL;
	*other = malloc(sizeof(**other));
	if (!*other)
		return (0);
	else
		return (1);
}
