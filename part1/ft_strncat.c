#include "libft.h"

char	*ft_strncat(char *s1, char *s2, size_t n)
{
	int i;
	int j;

	j = 0;
	i = ft_strlen(s1);
	while (s2[j] && n)
	{
		s1[i + j] = s2[j];
		j++;
		n--;
	}
	s1[j + i] = '\0';
	return (s1);
}
