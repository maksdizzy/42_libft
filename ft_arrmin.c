/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:52:39 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/15 17:21:47 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_arrmin(const int *arr, int len)
{
	int	*min;
	int	i;

	min = NULL;
	if (arr && len > 0)
	{
		min = (int*)&arr[0];
		i = 1;
		while (i < len)
		{
			if (arr[i] < *min)
			{
				min = (int*)&arr[i];
			}
			i++;
		}
	}
	return (min);
}
