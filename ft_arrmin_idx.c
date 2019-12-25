/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrmin_idx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 15:51:56 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/15 16:06:27 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arrmin_idx(const int *arr, int len)
{
	int	min;
	int	min_idx;
	int	i;

	min_idx = -1;
	if (arr && len > 0)
	{
		min = arr[0];
		min_idx = 0;
		i = 1;
		while (i < len)
		{
			if (arr[i] < min)
			{
				min = arr[i];
				min_idx = i;
			}
			i++;
		}
	}
	return (min_idx);
}
