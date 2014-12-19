/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:40:43 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/09 10:40:43 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	char	*s11;
	char	*s22;
	int		p;

	s11 = (char *)s1;
	s22 = (char *)s2;
	p = ft_strcmp(s11, s22);
	if (p == 0)
		return (1);
	return (0);
}
