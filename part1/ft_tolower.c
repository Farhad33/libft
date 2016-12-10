
#include "libft.h"

int		ft_tolower(int c)
{
	return (c <= 'Z' && c >= 'A') ? c + 32 : c;
}
