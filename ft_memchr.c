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
	unsigned char	*mem_s;
	unsigned char	find;

	if (s == NULL)
		return (NULL);
	mem_s = (unsigned char *)s;
	find = (unsigned char)c;
	while (n--)
	{
		if (*mem_s == find)
			return (mem_s);
		mem_s++;
	}
	return (NULL);
}
/*#include <string.h>
#include <stdio.h>
int main () {

   const char str[] = "nambajimana";
   const char ch = 'j';
   size_t len = 6;
   printf("%c %s\n", ch, memchr(str, ch, len));
   printf("%c %s\n", ch, ft_memchr(str, ch, len));
   return(0);
}*/
