/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:34:43 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/09 10:34:43 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	k;
	char	*p;
	size_t	y;

	p = s1;
	i = 0;
	k = 0;
	y = ft_strlen(s1);
	s1 = (char *)malloc(sizeof(char) * (y));
	s1 = p;
	while (i != y)
		i++;
	while (s2[k] && k < n)
	{
		s1[i] = s2[k];
		k++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
