/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 15:02:31 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/24 01:46:48 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!(res = malloc(sizeof(char) * size)))
		return (NULL);
	while (i <= size)
	{
		if (res == NULL)
			return (NULL);
		res[i] = '\0';
		i++;
	}
	return (res);
}
