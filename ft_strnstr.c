/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 10:42:13 by amagalla          #+#    #+#             */
/*   Updated: 2017/05/25 10:42:14 by amagalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	i = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= i)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, i) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
