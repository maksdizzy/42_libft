/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 19:34:12 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/17 00:15:42 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ss;
	char	*res;

	ss = (char*)s;
	res = NULL;
	while (*ss != '\0')
	{
		if (*ss == c)
			res = ss;
		ss++;
	}
	if (c == '\0')
		return (ss);
	return (res);
}
