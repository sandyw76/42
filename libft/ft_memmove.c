/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:32:46 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/12 20:48:28 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char*dst2;
	unsigned char*src2;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if (dst != src)
	{
		if (dst > src)
		{
			dst2 = dst2 + len - 1;
			src2 = src2 + len - 1;
			while (len > 0)
			{
				*dst2-- = *src2--;
				len--;
			}
		}
		else
		{
			while (len--)
				*dst2++ = *src2++;
		}
	}
	return (dst);
}
