/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 13:28:29 by lapang            #+#    #+#             */
/*   Updated: 2018/03/19 23:06:45 by lapang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!*need)
		return ((char *)hay);
	while (hay[i])
	{
		j = 0;
		while (hay[i] == need[j] && hay[i] && i < len)
		{
			i++;
			j++;
		}
		if (!need[j])
			return ((char *)&hay[i - j]);
		i = (i - j) + 1;
	}
	return (0);
}
