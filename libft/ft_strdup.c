/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:33:50 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/09 10:33:51 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *s2;

	s2 = NULL;
	s2 = (char *)malloc(sizeof(char) * (strlen(s1) + 1));
	if (s2 == NULL)
		return (NULL);
	ft_strcpy(s2, s1);
	return (s2);
}
