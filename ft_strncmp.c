/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:00:23 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/17 00:14:07 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	if (n <= 0)
		return (0);
	i = 0;
	while (i < n - 1 && *ss2 && *ss1)
	{
		if (*ss1 != *ss2)
			break ;
		ss1++;
		ss2++;
		i++;
	}
	return (*ss1 - *ss2);
}
