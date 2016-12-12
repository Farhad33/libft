/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 00:11:21 by marahimi          #+#    #+#             */
/*   Updated: 2016/12/11 00:11:27 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t n)
{
	int index;
	int match;
	int length;

	index = 0;
	match = 0;
	length = ft_strlen(little);
	if (length == 0)
		return (big);
	while (big[index] && n--)
	{
		while (little[match] == big[index])
		{
			if (match == length - 1)
				return (big + (index - match));
			match++;
			if (little[match] == big[index + 1])
				index++;
		}
		match = 0;
		index++;
	}
	return (0);
}
