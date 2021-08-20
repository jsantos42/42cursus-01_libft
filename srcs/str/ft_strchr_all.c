#include "../../include/libft.h"

int	ft_strchr_all(char *str, char chr)
{
	int	count;
	int	iter;

	count = 0;
	iter = 0;
	while (str[iter] != '\0')
	{
		if (str[iter] == chr)
			count++;
		iter++;
	}
	return (count);
}
