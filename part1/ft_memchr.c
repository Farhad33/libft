
#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	char *s2;

	s2 = (char *)s;
	while (n--)
	{
		if (*s2 == c)
			return (s2);
		s2++;
	}
	return (0);
}
