/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 19:22:03 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/09 21:39:16 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ss;

	ss = (char*)s;
	while (*ss != '\0')
	{
		if (*ss == c)
			return (ss);
		ss++;
	}
	if (c == '\0')
		return (ss);
	return (NULL);
}
