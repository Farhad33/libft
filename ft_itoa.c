/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 23:58:46 by marahimi          #+#    #+#             */
/*   Updated: 2016/12/10 23:58:49 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_negative(int *len, int *neg, int *n)
{
	if (*n < 0)
	{
		*n *= -1;
		*len += 1;
		*neg = 1;
	}
}

static void	ft_copystr(int *len, int *neg, char *str, int *n)
{
	str[*len] = '\0';
	while (*len >= 0)
	{
		*len = *len - 1;
		if (*len == 0 && *neg)
			str[*len] = '-';
		else
			str[*len] = (*n % 10) + '0';
		*n /= 10;
	}
}

char		*ft_itoa(int n)
{
	int		len;
	int		neg;
	int		temp;
	char	*str;

	len = 1;
	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n > 2147483647)
		return (ft_strdup("-1"));
	else if (n < -2147483648)
		return (ft_strdup("0"));
	ft_negative(&len, &neg, &n);
	temp = n;
	while ((temp /= 10) > 0)
		len++;
	if (!(str = (char *)malloc(len + 1)))
		return (0);
	ft_copystr(&len, &neg, str, &n);
	return (str);
}
