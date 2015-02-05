/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:41:18 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/12 20:56:30 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*r;
	unsigned char	*s11;
	unsigned char	*s22;
	size_t			a;

	s11 = (unsigned char*)s1;
	s22 = (unsigned char*)s2;
	a = ft_strlen(s1) + ft_strlen(s2);
	if (s11 == NULL || s22 == NULL)
		return (NULL);
	r = ft_strnew(a);
	ft_strcpy(r, s1);
	ft_strcat(r, s2);
	return (r);
}
