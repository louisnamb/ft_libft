/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:22:03 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/10 16:11:13 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		++s;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main () {

	char *src = "/|\x12\xff\x09\0\x42\042\0\42|\\";
 	int size = 12;

 	if (memchr(src, '\0', size) == ft_memchr(src, '\0', size))
		printf("correct");
 	else
	 	printf("incorrect");
	return(0);
}
*/