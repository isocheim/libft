/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 20:21:39 by lapang            #+#    #+#             */
/*   Updated: 2018/03/19 23:27:28 by lapang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*new;

	if (!alst)
		return ;
	while (*alst)
	{
		new = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = new;
	}
	alst = NULL;
}
