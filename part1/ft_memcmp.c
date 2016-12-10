
#include "libft.h"

int		ft_memcmp(void *str1, void *str2, size_t n)
{
	char *s1;
	char *s2;

	s1 = (char*)str1;
	s2 = (char*)str2;
	while (n--)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}
//
// int		ft_strncmp(char *s1, char *s2, size_t n)
// {
// 	while ((*s1 || *s2) && n--)
// 	{
// 		if (*s1 != *s2)
// 			return ((unsigned char)*s1 - (unsigned char)*s2);
// 		s1++;
// 		s2++;
// 	}
// 	return (0);
// }
