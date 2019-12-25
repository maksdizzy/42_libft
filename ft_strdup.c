/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 20:12:35 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/16 22:53:42 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		n;
	int		i;

	n = 0;
	while (s1[n] != '\0')
		n++;
	i = 0;
	res = (char *)malloc(sizeof(*res) * (n + 1));
	if (!res)
		return (NULL);
	while (i < n + 1)
	{
		res[i] = s1[i];
		i++;
	}
	return (res);
}
