/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 19:32:39 by lapang            #+#    #+#             */
/*   Updated: 2018/03/13 16:19:57 by lapang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str;
	unsigned char	*str2;
	int				i;

	i = 0;
	str = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (str[i] == str2[i] && str[i] != '\0' && str2[i] != '\0')
	{
		i++;
	}
	return (str[i] - str2[i]);
}
