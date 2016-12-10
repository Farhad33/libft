#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (*d != '\0' && n-- != 0)
		d++;
	dlen = d - dst;
	n = siz - dlen;

	if (n == 0)
		return(dlen + ft_strlen((char *)s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));	/* count does not include NUL */
}




// #include <sys/types.h>
// #include <string.h>

/*
 * Copy src to string dst of size siz.  At most siz-1 characters
 * will be copied.  Always NUL terminates (unless siz == 0).
 * Returns strlen(src); if retval >= siz, truncation occurred.
 */
// size_t
// strlcpy(char *dst, const char *src, size_t siz)
// {
// 	char *d = dst;
// 	const char *s = src;
// 	size_t n = siz;
//
// 	/* Copy as many bytes as will fit */
// 	if (n != 0) {
// 		while (--n != 0) {
// 			if ((*d++ = *s++) == '\0')
// 				break;
// 		}
// 	}
//
// 	/* Not enough room in dst, add NUL and traverse rest of src */
// 	if (n == 0) {
// 		if (siz != 0)
// 			*d = '\0';		/* NUL-terminate dst */
// 		while (*s++)
// 			;
// 	}
//
// 	return(s - src - 1);	/* count does not include NUL */
// }
//






//
// size_t i;
// size_t j;
// size_t dst_len;
// size_t src_len;
//
// dst_len = ft_strlen(dst);
// src_len = ft_strlen(src);
// if (size > dst_len)
// size -= dst_len;
// else if (src_len == 0)
// return (size);
// else if (dst_len > src_len)
// return (dst_len - src_len);
// else
// return (src_len + size);
// i = dst_len;
// j = 0;
// while (src[j] && --size)
// {
// 	dst[i + j] = src[j];
// 	j++;
// }
// dst[j + i] = '\0';
// return (dst_len + src_len);
//
//
//
//
//
//
//
//
//
// PHPAPI size_t strlcat(dst, src, siz)
// 	char *dst;
// 	const char *src;
// 	size_t siz;
// {
// 	register char *d = dst;
// 	register const char *s = src;
// 	register size_t n = siz;
// 	size_t dlen;
//
// 	/* Find the end of dst and adjust bytes left but don't go past end */
// 	while (*d != '\0' && n-- != 0)
// 		d++;
// 	dlen = d - dst;
// 	n = siz - dlen;
//
// 	if (n == 0)
// 		return(dlen + strlen(s));
// 	while (*s != '\0') {
// 		if (n != 1) {
// 			*d++ = *s;
// 			n--;
// 		}
// 		s++;
// 	}
// 	*d = '\0';
//
// 	return(dlen + (s - src));	/* count does not include NUL */
// }
//
// #endif /* !HAVE_STRLCAT */
