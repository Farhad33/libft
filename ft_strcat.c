/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 00:03:30 by marahimi          #+#    #+#             */
/*   Updated: 2016/12/11 00:03:35 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char *s2)
{
	int i;
	int j;

	j = 0;
	i = ft_strlen(s1);
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[j + i] = '\0';
	return (s1);
}
