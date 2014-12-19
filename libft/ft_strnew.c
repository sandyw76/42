/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlatapie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:39:22 by jlatapie          #+#    #+#             */
/*   Updated: 2014/11/09 10:39:22 by jlatapie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	char *k;

	k = NULL;
	k = (char *)malloc(sizeof(char) * size + 1);
	if (k == NULL)
		return (NULL);
	ft_bzero(k, size + 1);
	return (k);
}
