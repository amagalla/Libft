/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 10:30:01 by amagalla          #+#    #+#             */
/*   Updated: 2017/05/25 10:30:02 by amagalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*counter;
	size_t		i;

	counter = (const char *)s;
	i = -1;
	while (++i < n)
		if (*(counter + i) == (char)c)
			return ((void *)counter + i);
	return (NULL);
}
