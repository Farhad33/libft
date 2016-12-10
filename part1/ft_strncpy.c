#include "libft.h"

char	*ft_strncpy(char *dst, char *src, size_t len)
{
	char *d;

	d = dst;
	while(*src && len)
	{
		*d++ = *src++;
		len--;
	}
	while (len--)
		*d++ = '\0';
	return (dst);
}
