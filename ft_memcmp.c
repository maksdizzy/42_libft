/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 12:55:37 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/17 00:13:41 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long		i;
	const unsigned char *p1;
	const unsigned char *p2;

	i = 0;
	p1 = s1;
	p2 = s2;
	while (i < n)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		i++;
		p1++;
		p2++;
	}
	return (0);
}
