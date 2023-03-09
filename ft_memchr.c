/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:22:03 by lnambaji          #+#    #+#             */
/*   Updated: 2022/02/28 16:36:07 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem_s;
	unsigned char	chrc;
	size_t			i;
	
	if (s == '\0')
		return (NULL);
	i = 0;
	chrc = (unsigned char)c;
	mem_s = (unsigned char *)s;
	while (i < n)
	{
		if (*mem_s == chrc)
			return (mem_s);
		mem_s++;
		i++;
	}
	return (NULL);
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
