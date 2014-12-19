/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:41:09 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/11 11:22:55 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	int		a;
	size_t	v;

	v = (size_t)start;
	a = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	r = ft_strnew(len);
	while (i < v)
		i++;
	while (i < (v + len))
	{
		r[a] = s[i];
		i++;
		a++;
	}
	return (r);
}
