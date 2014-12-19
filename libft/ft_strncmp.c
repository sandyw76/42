/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:36:23 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/11 11:46:39 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (n > 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else if (!s1[i] || !s2[i])
			break ;
		i++;
		n--;
	}
	return (0);
}
