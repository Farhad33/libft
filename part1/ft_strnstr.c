
#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t n)
{
	int index;
	int match;
	int length;

	index = 0;
	match = 0;
	length = ft_strlen(little);
	if (length == 0)
		return (big);
	while (big[index] && n--)
	{
		while (little[match] == big[index])
		{
			if (match == length - 1)
				return (big + (index - match));
			match++;
			if (little[match] == big[index + 1])
				index++;
		}
		match = 0;
		index++;
	}
	return (0);
}
// 
//
// int		main()
// {
// 	char s2[] = "parkparker";
// 	char d2[] = "parker";
// 	printf("\n strnstr => %s\n", strnstr(s2, d2, 10));
//
// 	char s[] = "parkparker";
// 	char d[] = "parker";
// 	printf("\n ft_strnstr => %s\n", ft_strnstr(s, d, 10));
//
//
// 	return (0);
// }
