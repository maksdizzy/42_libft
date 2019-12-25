/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 23:20:51 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/17 00:17:47 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	beg;
	size_t	end;

	if (!s)
		return (NULL);
	beg = 0;
	while (s[beg] != '\0' && (s[beg] == ' ' || s[beg] == '\n'
				|| s[beg] == '\t'))
		beg++;
	end = ft_strlen(s) - 1;
	while (beg < end + 1 && (s[end] == ' ' || s[end] == '\n'
				|| s[end] == '\t'))
		end--;
	if (beg == end)
		return (ft_strnew(1));
	return (ft_strsub(s, beg, end - beg + 1));
}
