
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		temp;
	char	**str;
	char	*sub;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while ((s[i] != c) && s[i])
				i++;
			j++;
		}
		if (!s[i])
			break;
		i++;
	}
	str = (char **)malloc(j + 1);
	if (!str || !j)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			temp = 0;
			while (s[i + temp] != c)
				temp++;
			sub = (char *)malloc(temp + 1);
			if (!sub)
				return (0);
			temp = 0;
			while ((s[i] != c) && s[i])
				sub[temp++] = s[i++];
			sub[temp] = '\0';
			str[j++] = sub;
		}
		if (!s[i])
			break;
		i++;
	}
	str[j] = 0;
	return (str);
}


int		main(void)
{
	char	*s = "      split       this for   me  !       ";
	char	**ft;
	int		j = 0;

	ft = ft_strsplit(s, ' ');
	while (*ft)
	{
		ft_putstr(" X ");
		ft_putchar('\n');
		ft_putstr(*ft);
		ft_putchar('\n');
		ft++;
	}
	return(0);
}
