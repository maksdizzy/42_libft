/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:51:39 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/15 17:29:08 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_arrmax(const int *arr, int len)
{
	int	*max;
	int	i;

	max = NULL;
	if (arr && len > 0)
	{
		max = (int*)&arr[0];
		i = 1;
		while (i < len)
		{
			if (arr[i] > *max)
			{
				max = (int*)&arr[i];
			}
			i++;
		}
	}
	return (max);
}
