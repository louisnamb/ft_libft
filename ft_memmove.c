/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:26:01 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/10 13:48:19 by lnambaji         ###   ########.fr       */
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
			*(n_dst + len) = *(n_src + len);
	}
	else
	{
		while (len--)
			*n_dst++ = *n_src++;
	}
	return (dst);
}/*
int     main(void)
{
	char src[5] = {'a', 'b', 'c', 'd', 'e'};
	char dst1[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
  	char dest2[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
  	size_t  len = 5;
    int     overlap_offset = 6;

    printf("src: %s\n", src);
    printf("%s\n", dst1);
    printf("%s\n", dest2);

    // Using standard memmove()
    memmove(dst1 + 2, src, len);
    printf("dst1 (after std memmove()): %s\n", dst1);

    // Using your implementation of memmove()
    ft_memmove(dest2 + 2, src, len);
    printf("dst2 (after ft_memmove()):  %s\n", dest2);

    return (0);
}*/
