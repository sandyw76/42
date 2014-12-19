/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:32:15 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/09 10:32:19 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*b;
	unsigned char	*c;
	size_t			k;

	b = (unsigned char *)dst;
	c = (unsigned char *)src;
	k = 0;
	while (k < n)
	{
		b[k] = c[k];
		k++;
	}
	return (dst);
}
