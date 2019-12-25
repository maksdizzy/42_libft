/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 19:01:06 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/16 23:27:04 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	dst_len;
	int	src_len;
	int	i;
	int	k;

	i = 0;
	src_len = ft_strlen(src);
	while (dst[i] != '\0' && i < (int)dstsize)
		i++;
	dst_len = i;
	k = 0;
	while (src[k] != '\0' && i < (int)dstsize - 1)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	if (dst_len < (int)dstsize)
		dst[i] = '\0';
	return (dst_len + src_len);
}
