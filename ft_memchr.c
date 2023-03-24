/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:22:03 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/24 15:43:16 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	while (j < n)
	{
		if (*(unsigned char *)(s + j) == (unsigned char)c)
			return ((void *)(s + j));
		j++;
	}
	return (NULL);
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
