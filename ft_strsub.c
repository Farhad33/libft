
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	if ((!s || !len) || !s[start])
		return (0);
	str = (char *)malloc(len + 1);
	i = 0;
	if (!str)
		return (0);
	while (len--)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);

}
