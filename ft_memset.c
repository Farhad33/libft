
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	char			*s;
	unsigned char	ch;

	ch = (unsigned char)c;
	s = b;
	i = 0;
	while (len)
	{
		s[i] = ch;
		len--;
		i++;
	}
	return (b);
}
