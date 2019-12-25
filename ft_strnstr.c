/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 13:26:58 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/17 00:15:18 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	unsigned long	k;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	if (needle[i] == '\0' && (haystack[i] == '\0' || len == 0))
		return ((char*)haystack);
	while ((haystack[i] != '\0') && (i < len))
	{
		if (haystack[i] == needle[0])
		{
			k = 0;
			while ((needle[k] == haystack[i + k] && i + k < len) &&
					needle[k] != '\0')
				k++;
			if (needle[k] == '\0')
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
