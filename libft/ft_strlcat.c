/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:34:54 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/11 11:46:17 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	c;
	size_t	a;

	c = ft_strlen(dst);
	a = ft_strlen(src);
	if (size <= c)
		return (size + a);
	if (a < size - c)
	{
		ft_memcpy(dst + c, src, a);
		dst = dst + c + a;
	}
	else
	{
		ft_memcpy(dst + c, src, size - c - 1);
		dst = dst + size - 1;
	}
	*dst = '\0';
	return (a + c);
}
