/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:40:50 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/12 20:56:11 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;
	char	*s11;
	char	*s22;

	i = 0;
	s11 = (char *)s1;
	s22 = (char *)s2;
	if (ft_strncmp(s11, s22, n) == 0)
		i = 1;
	return (i);
}
