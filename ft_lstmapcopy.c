/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:08:12 by lnambaji          #+#    #+#             */
/*   Updated: 2022/02/25 17:15:12 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_list = ft_lstnew(f(lst->content));
		if (!(new_list))
		{
			ft_lstclear(&new_elem, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&new_elem, new_list);
	}
	return (new_elem);
}
