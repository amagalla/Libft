/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 10:24:52 by amagalla          #+#    #+#             */
/*   Updated: 2017/05/25 10:24:54 by amagalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pointer;

	pointer = (unsigned char *)b;
	while (len > 0)
	{
		*pointer++ = (unsigned char)c;
		len--;
	}
	return (b);
}
