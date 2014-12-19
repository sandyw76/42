/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:35:40 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/10 15:43:03 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		k;
	char	*s11;
	char	*s22;

	s11 = (char *)s1;
	s22 = (char *)s2;
	i = 0;
	k = strlen(s2);
	if (k == 0)
		return (s11);
	while (s11[i])
	{
		if (s11[i] == s22[i])
		{
			if (ft_strncmp(s11, s22, k) == 0)
				return (s11);
		}
		s11++;
	}
	return (NULL);
}
