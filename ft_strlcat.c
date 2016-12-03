#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size > dst_len)
		size -= dst_len;
	else if (src_len == 0)
		return (size);
	else if (dst_len > src_len)
		return (dst_len - src_len);
	else
		return (src_len + size);
	i = dst_len;
	j = 0;
	while (src[j] && --size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[j + i] = '\0';
	return (dst_len + src_len);
}
