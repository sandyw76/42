/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:40:26 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/09 10:40:26 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	char	*r;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	r = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		r[i] = (*f)(s[i]);
		i++;
	}
	return (r);
}
