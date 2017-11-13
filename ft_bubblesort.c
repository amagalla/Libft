/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubblesort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 12:07:59 by amagalla          #+#    #+#             */
/*   Updated: 2017/05/30 12:17:15 by amagalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bubblesort(int values[], int n)
{
	int temp;
	int flag;
	int i;

	flag = 1;
	while (flag == 1)
	{
		flag = 0;
		i = 0;
		while (i < n - 1)
		{
			if (values[i] > values[i + 1])
			{
				temp = values[i + 1];
				values[i + 1] = values[i];
				values[i] = temp;
				flag = 1;
			}
			++i;
		}
	}
}
