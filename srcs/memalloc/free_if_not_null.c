#include "../../include/libft.h"

void	free_if_not_null(void *memory)
{
	if (memory != NULL)
		free(memory);
}
