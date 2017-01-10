/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 23:56:56 by marahimi          #+#    #+#             */
/*   Updated: 2016/12/10 23:57:04 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_check(char *s, int *result)
{
	int i;
	int negative;
	int positive;

	positive = 0;
	negative = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '-' && (s[i + 1] >= 48 && s[i + 1] <= 57))
			negative = 1;
		if (s[i] == '+' && (s[i + 1] >= 48 && s[i + 1] <= 57))
			positive = 1;
		if (s[i] >= 48 && s[i] <= 57)
		{
			*result = *result * 10 + (s[i] - '0');
			if (!(s[i + 1] >= 48 && s[i + 1] <= 57))
				break ;
		}
		else if (!(ft_isspace(s[i])) && (!negative && !positive))
			break ;
		i++;
	}
	if (negative)
		*result = -*result;
}

int			ft_atoi(char *s)
{
	int result;

	result = 0;
	ft_check(s, &result);
	return (result);
}
