#include "../../include/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(new));
	if (!new)
		return (0);
	new->content = content;
	new->next = 0;
	return (new);
}
