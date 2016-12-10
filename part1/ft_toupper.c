
#include "libft.h"

int		ft_toupper(int c)
{
	return (c <= 'z' && c >= 'a') ? c - 32 : c;
}
