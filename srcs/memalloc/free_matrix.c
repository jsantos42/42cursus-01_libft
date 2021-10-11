#include "../../include/libft.h"

/*
**	This function is called to free the various arrays of a matrix. One possible
**	use could be to free the already allocated arrays of a matrix when there's
**	an error and the program must quit.
**	Parameters:
**	1) The matrix itself.
**	2) The number of arrays on it.
*/

void	free_matrix(void **matrix, int arrays)
{
	int	iter;

	if (matrix != NULL)
	{
		iter = -1;
		while (++iter < arrays)
			free_if_not_null(matrix[iter]);
		free(matrix);
	}
}
