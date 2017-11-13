/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 11:05:05 by amagalla          #+#    #+#             */
/*   Updated: 2017/06/14 11:05:06 by amagalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;

	if (!alst || !del)
		return ;
	list = *alst;
	while (list)
	{
		del(list->content, list->content_size);
		free(list);
		list = list->next;
	}
	*alst = NULL;
}
