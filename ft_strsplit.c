/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 00:00:07 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/24 01:56:45 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static int		ft_word_count(char const *s, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	if (s == NULL)
		return (int)(NULL);
	if (s[0] != '\0')
		word++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			word++;
		i++;
	}
	return (word);
}

static char		*ft_get_word(char *s, char c, int *i)
{
	char	*word;
	int		j;

	j = 0;
	word = (char*)malloc((ft_strlen(s) + 1) * sizeof(char));
	while (s[*i] != c && s[*i])
	{
		word[j++] = s[*i];
		*i += 1;
	}
	word[j] = '\0';
	return (ft_strdup(word));
}

char			**ft_strsplit(char const *s, char c)
{
	int		words;
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	words = ft_word_count(s, c);
	if (s == NULL)
		return (NULL);
	str = (char**)malloc((words + 1) * sizeof(char*));
	if (str == NULL)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (j < words && s[i])
	{
		str[j] = ft_get_word((char*)s, c, &i);
		while (s[i] == c && s[i])
			i++;
		j++;
	}
	str[j] = NULL;
	return (str);
}
