/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 10:27:00 by amagalla          #+#    #+#             */
/*   Updated: 2017/05/25 10:27:01 by amagalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*pointer;
	char	*pointer2;

	pointer = dst;
	pointer2 = (char *)src;
	i = 0;
	while (i < n)
	{
		pointer[i] = pointer2[i];
		i++;
	}
	return (dst);
}
