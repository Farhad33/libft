
#include "libft.h"

int		ft_atoi(char *s)
{
	int i;
	int result;
	int negative;

	negative = 0;
	i = 0;
	result = 0;
	while (s[i])
	{
		if (s[i] == '-' && (s[i + 1] >= 48 && s[i + 1] <= 57))
			negative = 1;
		if (s[i] >= 48 && s[i] <= 57)
			result = result * 10 + (s[i] - '0');
		else if (!(s[i] <= 32 && s[i] > 0) && !(negative))
			break ;
		i++;
	}
	if (negative)
		result = -result;
	return (result);
}