
#include "libft.h"

char	*ft_strmap(char const *s, char(*f)(char))
{
	int		len;
	int		i;
	char	*s1;
	char	*str;

	if (!s)
		return (0);
	i = 0;
	s1 = (char *)s;
	len = ft_strlen(s1) + 1;
	str = (char *)malloc(len);
	if (s1[i] && str)
	{
		while (s1[i])
		{
			str[i] = f(s1[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
