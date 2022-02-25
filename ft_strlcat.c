/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:28:30 by lnambaji          #+#    #+#             */
/*   Updated: 2022/01/19 13:28:32 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

it takes the whole buffer size and guarantees the presence of 
terminal symbol at the result.

strlcpy() and strlcat() take the full size of the destination buffer and
guarantee NUL-termination if there is room.  Note that room for the NUL
should be included in dstsize.

strlcat() appends string src to the end of dst.  It will append at most
dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
dstsize is 0 or the original dst string was longer than dstsize (in practice
this should not happen as it means that either dstsize is incorrect or that
dst is not a proper string).
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_sz;
	size_t	src_sz;
	size_t	i;
	
	i = 0;
	dst_sz = ft_strlen(dst);
	src_sz = ft_strlen(src);
	if (size <= dst_sz)
		return (src_sz + size);
	while (src[i] && i < (size - dst_sz - 1))//(dst_sz + i) < (size - 1))//
	{
		dst[dst_sz + i] = src[i];
		i++;
	}
	dst[dst_sz + i] = '\0';
	return (src_sz + dst_sz);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    printf("</-----------------------------------------/>\n");
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int size = 64;
    char buffer[size];

    strcpy(buffer,first);
    int r = strlcat(buffer,last,size);
    puts(buffer);
    printf("Value returned: %d\n",r);
    if(r > size )
        puts("String truncated");
    else
        puts("String was fully copied");
    printf("</------------------------------------------/>\n");
    char source[] = "This is ";
    char destination[] = "a potentially long string";
    size = 64;
    char len[size];

    strcpy(len,source);
    r = ft_strlcat(len,destination,size);
    puts(len);
    printf("Value returned: %d\n",r);
    if(r > size )
        puts("String truncated");
    else
        puts("String was fully copied");
    
    return (0);
}*/
