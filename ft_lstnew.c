/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:07:35 by lnambaji          #+#    #+#             */
/*   Updated: 2022/02/25 15:31:54 by jhabaguh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newtype;

	newtype = (t_list *)malloc(sizeof(t_list));
	if (!newtype)
		return (NULL);
	newtype->content = content;
	newtype->next = NULL;
	return (newtype);
}
