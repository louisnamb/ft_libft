/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:06:21 by lnambaji          #+#    #+#             */
/*   Updated: 2022/01/19 12:06:23 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t          ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0) //if the len is 0 then return the length of src
	{
		while (src[i])
			i++;
	}
	while (i < (size - 1) && src[i])
	{	
		dst[i] = src[i];
		i++;
	}
	if (i < size) //if we havent reached the max number of bytes we'll do, then add the null terminating character
		dst[i] = '\0';
	return (i);
}/*
#include <string.h>
#include <stdio.h>
void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    printf("strlcpy:%lu\n", strlcpy(buffer,string,size));
    printf("Copied '%s' into '%s', length %lu\n", string, buffer, strlcpy(buffer,string,size));
    printf("\n\n");
    char empty[19];
    char new[] = "Hello there, Venus";
    printf("ft: strlcpy:%u\n", ft_strlcpy(empty,new,size));
    printf("ft: Copied '%s' into '%s', length %u\n", new, empty, ft_strlcpy(buffer,new,size));
    printf("</-------------------------------------------/>");
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}*/
