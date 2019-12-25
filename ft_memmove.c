/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 14:29:21 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/17 00:17:21 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*c_dst;
	const unsigned char	*c_src;

	c_src = (unsigned char*)src;
	c_dst = (unsigned char*)dst;
	if (c_src == c_dst)
		return (dst);
	if (c_src < c_dst)
	{
		c_src = c_src + len - 1;
		c_dst = c_dst + len - 1;
		while (len--)
			*c_dst-- = *c_src--;
		return (dst);
	}
	else
	{
		while (len--)
			*c_dst++ = *c_src++;
		return (dst);
	}
	return (dst);
}
