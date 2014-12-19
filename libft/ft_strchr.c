/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:35:07 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/11 11:44:13 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*s2;
	char	cc;

	cc = (char)c;
	s2 = (char *)s;
	i = 0;
	while (s2[i] != cc && s2[i] != '\0')
		i++;
	if (s2[i] == cc)
		return (s2 + i);
	return (NULL);
}
