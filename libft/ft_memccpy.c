/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:32:32 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/12 20:48:03 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst2;
	unsigned char		*src2;
	unsigned char		a;
	size_t				i;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	a = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (src2[i] == a)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
