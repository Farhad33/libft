#include "libft.h"

char *ft_strdup(char *src)
{
    char *str;
    char *p;

    str = malloc(ft_strlen(src) + 1);
	if (!str)
		return (0);
    p = str;
    while (*src)
        *p++ = *src++;
    *p = '\0';
    return str;
}
