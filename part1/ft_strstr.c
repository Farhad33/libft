
#include "libft.h"

char	*ft_strstr(char *big, char *little)
{
	int index;
	int match;
	int length;

	index = 0;
	match = 0;
	length = 0;

	length = ft_strlen(little);
	if (length == 0)
		return (big);
	while (big[index])
	{
		while (little[match] == big[index + match])
		{
			if (match == length - 1)
				return (big + index);
			match++;
		}
		match = 0;
		index++;
	}
	return (0);
}
