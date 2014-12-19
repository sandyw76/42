/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:38:59 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/09 10:39:00 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memalloc(size_t size)
{
	char *k;

	k = (char *)malloc(sizeof(char) * size);
	if (k == NULL)
		return (NULL);
	ft_bzero(k, size);
	return (k);
}
