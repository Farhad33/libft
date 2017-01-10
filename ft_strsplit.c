/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 00:12:41 by marahimi          #+#    #+#             */
/*   Updated: 2016/12/11 00:12:44 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	int		j;
	int		i;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i])
				i++;
			j++;
			i--;
		}
		i++;
	}
	return (j);
}

static int		ft_count_word(char const *s, char c, int i)
{
	int j;

	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (j);
		j++;
		i++;
	}
	return (j);
}

static char		**ft_copy(char const *s, char c, char **str)
{
	int		i;
	int		j;
	int		k;
	char	*sub;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!(sub = (char *)malloc(ft_count_word(s, c, i) + 1)))
				return (0);
			k = 0;
			while ((s[i] != c) && s[i])
				sub[k++] = s[i++];
			sub[k] = '\0';
			str[j++] = sub;
			i--;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	int		temp;
	char	**str;

	if (!s)
		return (0);
	temp = ft_count_words(s, c);
	if (!(str = (char **)malloc(sizeof(char*) * (temp + 1))))
		return (0);
	if (temp == 0)
	{
		str[0] = NULL;
		return (str);
	}
	return (ft_copy(s, c, str));
}
