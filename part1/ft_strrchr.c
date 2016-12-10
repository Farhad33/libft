
#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char *s2;

	s2 = (char *)s;
	while (*s2)
		s2++;
	if (c == *s2)
		return (s2);
	s2--;
	while (*s2)
	{
		if (*s2 == c)
			return (s2);
		s2--;
	}
	return (0);
}
