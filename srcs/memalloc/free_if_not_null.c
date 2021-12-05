#include "../../include/libft.h"

/*
**	Frees the pointer passed as an argument and returns NULL to set that pointer
**	to NULL.
*/

void	*free_if_not_null(void *pointer)
{
	if (pointer != NULL)
		free(pointer);
	return (NULL);
}
