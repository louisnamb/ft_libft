/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:26:01 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/10 15:46:12 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*n_dst;
	char	*n_src;

	n_dst = (char *)dst;
	n_src = (char *)src;
	if (n_dst == n_src)
		return (dst);
	if (n_src < n_dst && n_dst < n_src + len)
	{
		while (len--)
			*(n_dst + len) = *(n_src + len);
	}
	else
	{
		while (len--)
			*n_dst++ = *n_src++;
	}
	return (dst);
}
/*
int     main(void)
{
	char	*src = "this is a good nyancat !\r\n";
	char	dst1[0xF0];
	char	dst2[0xF0];
	size_t  len = 5;
	int     off = 0;
	printf("src: %s\n", src);
	printf("dst1: %s\n", dst1);
	printf("dst2: %s\n", dst2);
	// Using standard memmove()
	memmove(dst1 + off, src, len);
	printf("dst1 (after std memmove()): %s\n", dst1);
	// Using your implementation of memmove()
	ft_memmove(dst2 + off, src, len);
	printf("dst2 (after ft_memmove()):  %s\n", dst2);
	return (0);
}*/