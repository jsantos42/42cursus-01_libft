#include "../../include/libft.h"

double	is_in_range_int(double value, double min, double max)
{
	return (value >= min && value <= max);
}


int	is_in_range_long(long value, long min, long max)
{
	return (value >= min && value <= max);
}

