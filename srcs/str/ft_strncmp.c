#include "../../include/libft.h"

/*
**	This function is intended to mimic strncmp of the Standard C Library and, as
**	such, if the size n passed on is strlen of the shorter string, it might give
**	unexpected results. To make sure the two strings are exactly the same, pass
**	to size_t n strlen + 1! That way the NULL terminating character will also be
**	compared.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t					i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0'
		&& s2[i] != '\0'
		&& i < n - 1)
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
			i++;
		else
			break ;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
