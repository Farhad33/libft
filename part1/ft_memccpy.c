#include "libft.h"

void	*ft_memccpy(void *dst1, void *src1, int c, size_t n)
{
	char	*src;
	char	*dst;

	src = src1;
	dst = dst1;
	while (n--)
	{
		*dst = *src;
		if ((unsigned char)*src == (unsigned char)c)
		{
			dst++;
			return (dst);
		}
		dst++;
		src++;
	}
	return (0);
}
