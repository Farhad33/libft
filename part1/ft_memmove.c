
#include "libft.h"

void 	*ft_memmove(void *dst, void *src, size_t c)
{
	char *s = src;
	char *d = dst;

	if((s == d) || !c)
		return (dst);
	if (d < s)
	{
		while (c--)
			*d++ = *s++;
		return (dst);
	}
	s += c;
	d += c;
	while (c--)
		*--d = *--s;
	return (dst);
}
