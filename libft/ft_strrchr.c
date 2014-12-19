/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:35:30 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/11 11:48:24 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s2;
	char	cc;
	char	*res;

	res = NULL;
	cc = (char)c;
	s2 = (char *)s;
	i = 0;
	while (s[i] != '\0')
	{
		if (s2[i] == cc)
			res = s2 + i;
		i++;
	}
	if (s2[i] == cc)
		res = s2 + i;
	return (res);
}
