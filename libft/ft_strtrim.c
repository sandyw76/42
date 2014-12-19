/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:41:29 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/11 11:33:26 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	size_t	a;
	size_t	c;
	size_t	i;
	size_t	e;
	char	*k;

	k = NULL;
	e = ft_strlen(s) - 1;
	i = 0;
	a = 0;
	c = 0;
	while (s[e] == '\n' || s[e] == ' ' || s[e] == '\t')
	{
		e--;
		a++;
	}
	while (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
		i++;
	k = ft_strnew(strlen(s));
	e = ft_strlen(s) - 1;
	while (i < (e - a + 1))
		k[c++] = s[i++];
	return (k);
}
