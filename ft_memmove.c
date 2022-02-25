/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:26:01 by lnambaji          #+#    #+#             */
/*   Updated: 2022/01/18 14:26:06 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void            *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

    	i = 0;
    	if (!dst && !src)
        	return (0);
    	else if (src < dst) //used when data is overlapping like moving an array within itself
    	{
        	while (len-- > 0)
            		((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
    	}
    	else if (src >= dst)
    	{
        	while (i++ < len) //means dest < src so its just like ft_memcpy.c
            		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
    	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
int main()
//while memmove performs a test to determine which direction to loop in to avoid corrupting the data. 
{
    char str[] = "Geeksfor";
    char arr[] = "nambajiajman";
    char ptr[] = "foo-bar";
    printf("d: %s s: %s -> %s\n", str, arr, memmove(&str[2],&arr[4],5)); //fine
    printf("d: %s s: %s -> %s\n", str, arr, ft_memmove(&str[2],&arr[4],5));
    printf("\nnew: %s theirs: %s\n", ft_memmove(&ptr, &str, 3 * sizeof(char)), memmove(&ptr, &str, 3 * sizeof(char)));
    return (0);  
}*/
