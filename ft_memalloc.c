
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *str;

	str = malloc(size);
	if (!str)
		return (0);
	return (ft_memset(str, 0, size));
}
