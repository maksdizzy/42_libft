/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 15:20:59 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/16 22:44:05 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned long	i;
	unsigned long	k;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	if (needle[i] == '\0' && (haystack[i] == '\0'))
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = 0;
			while ((needle[k] == haystack[i + k]) &&
					needle[k] != '\0')
				k++;
			if (needle[k] == '\0')
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
