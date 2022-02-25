/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:08:12 by lnambaji          #+#    #+#             */
/*   Updated: 2022/02/07 17:08:21 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list  *new_list;
	t_list  *new_elem;

	if (!lst || !f || !del)
		return (NULL);	
	if (!(new_list = ft_lstnew((f)(lst->content))))
	{
		ft_lstclear(&new_elem, del);
		return (NULL);
	}
	new_elem = new_list;
	lst = lst->next;
	while (lst)
	{
		if (!(new_list = ft_lstnew(f((lst->content)))))
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new_elem, del);
			break;	
		}
		lst = lst->next;
		ft_lstadd_back(&new_elem, new_list);
	}
	return (new_list);
}
