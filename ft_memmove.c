/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:26:01 by lnambaji          #+#    #+#             */
/*   Updated: 2022/03/16 18:05:23 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*n_dst;
	char	*n_src;

	n_dst = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	if (n_dst == n_src)
		return (dst);
	if (n_src - n_dst > 0)
	{
		i = -1;
		while (++i < len)
			n_dst[i] = n_src[i];
	}
	else
	{
		i = len;
		while (i > 0)
		{
			i--;
			n_dsc[i] = n_src[i];
		}
	}
	return (dst);
}
