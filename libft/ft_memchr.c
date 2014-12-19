/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:33:13 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/09 10:33:14 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	cc;
	size_t			i;

	cc = (unsigned char)c;
	s1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == cc)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
