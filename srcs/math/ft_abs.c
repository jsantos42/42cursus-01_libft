#include "../../include/libft.h"

/*
**	Returns the absolute value of the given number.
*/

int	ft_abs_int(int number)
{
	if (number < 0)
		return (number * -1);
	return (number);
}

double	ft_abs_double(double number)
{
	if (number < 0)
		return (number * -1);
	return (number);
}
