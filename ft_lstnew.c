#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (0);
	if (!content)
	{
		new->content_size = 0;
		new->content = NULL;
		return (new);
	}
	if (!(new->content = malloc(content_size)))
	{
		free(new);
		return (0);
	}
	ft_memcpy(new->content, content, content_size);
	new->content_size = content_size;
	new->next = NULL;
	return (new);
}
