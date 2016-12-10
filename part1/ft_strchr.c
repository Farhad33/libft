
#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	char *s2;

	s2 = (char *)s;
	while (*s2++)
	{
		if (*s2 == c)
			return (s2);
	}
	return (0);
}
