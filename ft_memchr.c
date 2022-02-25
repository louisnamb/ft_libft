/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:22:03 by lnambaji          #+#    #+#             */
/*   Updated: 2022/01/19 18:22:06 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    	unsigned char	*mem_s;
    	size_t	i;

    	i = 0;
    	mem_s = (unsigned char *)s;
    	while (mem_s[i] && i < n)
    	{
        	if (mem_s[i] == (unsigned char)c)
            		return (mem_s + i);
        	i++;
    	}
	mem_s = 0;
	return (mem_s);
}
/*
#include <string.h>
#include <stdio.h>
int main () {

   const char str[] = "nambajimana";
   const char ch = 'j';
   size_t len = 6;
   printf("%c %s\n", ch, memchr(str, ch, len));
   printf("%c %s\n", ch, ft_memchr(str, ch, len));
   return(0);
}*/
