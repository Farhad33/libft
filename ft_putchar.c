
#include "libft.h"

void	ft_putchar(char c)
{
	// c = (unsigned char)c;
	write(1, &c, 1);
}
