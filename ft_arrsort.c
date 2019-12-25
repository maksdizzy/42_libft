/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:53:30 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/15 17:30:34 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arrsort(int *arr, int len, int asc)
{
	int	i;
	int	j;

	i = 0;
	if (*arr && len > 0 && (asc == 0 || asc == 1))
		while (i < len)
		{
			j = i + 1;
			while (j < len)
			{
				if (asc == 1)
					if (arr[i] > arr[j])
						ft_intswap(&arr[i], &arr[j]);
				if (asc == 0)
					if (arr[i] < arr[j])
						ft_intswap(&arr[i], &arr[j]);
				j++;
			}
			i++;
		}
}
