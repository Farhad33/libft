#include "libft.h"

void				ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	// t_list *elem;
	//
	// elem = *alst;
	// while (elem->next)
	// {
	// 	ft_lstdelone(&(*alst), del);
	// 	elem = elem->next;
	// }

	if ((*alst)->next)
		ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(&(*alst), del);

	// del((*alst)->content, (*alst)->content_size);
	// free(*alst);
	// *alst = NULL;
}

// void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
