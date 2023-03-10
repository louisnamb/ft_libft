/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:22:03 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/10 13:56:59 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*mem_s;
	
	if (s == NULL)
		return (NULL);
	mem_s = (const char *)s;
	while (n)
	{
		if (*mem_s == c)
			return ((void *)mem_s);
		mem_s++;
		n--;
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
