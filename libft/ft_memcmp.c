/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:33:24 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/12 20:48:51 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char		*s11;
	char		*s22;
	size_t		c;

	s11 = (char	*)s1;
	s22 = (char	*)s2;
	c = ft_strncmp(s11, s22, n);
	return (c);
}
