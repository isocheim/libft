/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 18:10:55 by lapang            #+#    #+#             */
/*   Updated: 2018/03/19 12:48:53 by lapang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest;
	size_t	source;
	size_t	i;

	dest = ft_strlen(dst);
	source = ft_strlen(src);
	i = 0;
	if (dstsize <= dest)
		return (source + dstsize);
	while (src[i] != '\0' && dest + i + 1 < dstsize)
	{
		dst[dest + i] = src[i];
		i++;
	}
	dst[dest + i] = '\0';
	return (dest + source);
}
