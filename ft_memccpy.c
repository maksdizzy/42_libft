/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 15:39:11 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/17 00:13:22 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*c_dst;
	const unsigned char	*c_src;
	unsigned char		cc;
	unsigned long		i;

	c_src = (unsigned char*)src;
	c_dst = (unsigned char*)dst;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		c_dst[i] = c_src[i];
		if (c_dst[i] == cc)
			return ((void*)(dst + i + 1));
		i++;
	}
	return (NULL);
}
