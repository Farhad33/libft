#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	char *d;
	char *s;

	d = dst;
	s = src;
	if((s == d) || !n)
		return (dst);
	while (n--)
		*d++ = *s++;
	return (dst);
}
