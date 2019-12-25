/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrmax_idx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:09:06 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/15 16:09:35 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arrmax_idx(const int *arr, int len)
{
	int	max;
	int	max_idx;
	int	i;

	max_idx = -1;
	if (arr && len > 0)
	{
		max = arr[0];
		max_idx = 0;
		i = 1;
		while (i < len)
		{
			if (arr[i] > max)
			{
				max = arr[i];
				max_idx = i;
			}
			i++;
		}
	}
	return (max_idx);
}
