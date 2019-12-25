/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 21:43:13 by msavelye          #+#    #+#             */
/*   Updated: 2019/12/16 23:44:44 by msavelye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*tmp;
	t_list	*cur;

	if (!lst || !f)
		return (NULL);
	tmp = (f)(lst);
	if ((res = ft_lstnew(tmp->content, tmp->content_size)))
	{
		cur = res;
		lst = lst->next;
		while (lst)
		{
			tmp = (*f)(lst);
			if (!(cur->next = ft_lstnew(tmp->content, tmp->content_size)))
				return (NULL);
			cur = cur->next;
			lst = lst->next;
		}
	}
	return (res);
}
