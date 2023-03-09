/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:26:01 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/09 13:15:16 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*n_dst;
	char	*n_src;

	n_dst = (char *)dst;
	n_src = (char *)src;
	if (n_dst == n_src)
		return (dst);
	if (n_src < n_dst)
	{
		while (len--)
			n_dst[len] = n_src[len];
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
    char    src[] = "Hello, world!";
    char    dst1[] = "************";
    char    dst2[] = "************";
    size_t  len = strlen(src);
    int     overlap_offset = 6;

    printf("src: %s\n", src);
    printf("dst1 (original): %s\n", dst1);
    printf("dst2 (test):     %s\n", dst2);

    // Using standard memmove()
    memmove(dst1, src, len);
    printf("dst1 (after std memmove()): %s\n", dst1);

    // Using your implementation of memmove()
    ft_memmove(dst2 + overlap_offset, src, len);
    printf("dst2 (after ft_memmove()):  %s\n", dst2);

    return (0);
}*/
