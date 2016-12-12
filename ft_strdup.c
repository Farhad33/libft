/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 00:04:50 by marahimi          #+#    #+#             */
/*   Updated: 2016/12/11 00:04:52 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
