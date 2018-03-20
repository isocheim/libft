/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 13:59:57 by lapang            #+#    #+#             */
/*   Updated: 2018/03/19 20:23:25 by lapang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	unsigned char		*source;
	size_t				i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	if (source > dest)
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	else
		while (len > 0)
		{
			len--;
			dest[len] = source[len];
		}
	return (dest);
}
