/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 12:32:30 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/24 00:39:14 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n <= 0)
		len = len + 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		len;
	int		i;

	i = 0;
	nbr = (n < 0 ? n * -1 : n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_getlen(n);
	if (!(str = (char *)(malloc(sizeof(char) * (len + 1)))))
		return (NULL);
	str[len--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		i++;
	}
	while (len >= i)
	{
		str[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return (ft_strdup(str));
}
