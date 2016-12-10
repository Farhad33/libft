
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = (char *)malloc(size + 1);
	if (!str)
		return (0);
	return (ft_memset(str, 0, size + 1));
}
