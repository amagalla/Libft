/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 10:36:12 by amagalla          #+#    #+#             */
/*   Updated: 2017/05/25 10:36:14 by amagalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	ft_bzero(dst, len);
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
