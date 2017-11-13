/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 12:01:21 by amagalla          #+#    #+#             */
/*   Updated: 2017/05/30 12:15:25 by amagalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_search(int value, int values[], int n)
{
	int start;
	int end;
	int middle;

	start = 0;
	end = n - 1;

	while (start <= end)
	{
		middle = (start + end) / 2;
		if (value == values[middle])
			return (0);
		else if (value < values[middle])
			end = middle - 1;
		else
			start = middle + 1;
	}
	return (1);
}
