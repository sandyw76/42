/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:34:32 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/11 11:43:47 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *s1, const char *s2)
{
	size_t		i;
	size_t		k;
	char		*p;

	p = s1;
	i = 0;
	k = 0;
	s1 = (char *)malloc(sizeof(char) * 10000);
	s1 = p;
	while (i != ft_strlen(s1))
		i++;
	while (s2[k])
	{
		s1[i] = s2[k];
		k++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
