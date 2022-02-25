/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:53:00 by lnambaji          #+#    #+#             */
/*   Updated: 2022/01/19 17:53:06 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	len;
	
	len = ft_strlen(s);
	while (len)
	{
		if (s[len] == c)
		{
			return ((char *)s + ft_strlen(s) - (ft_strlen(s) - len));
		}
		len--;
	}
	if (c == '\0')
	{
		return ((char *)s + len);
	}
	return (0);
}
/*
char	*example(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char*)&s[i]);
		i--;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>
int main () {

   const char str[] = "nambajimana";
   const char ch = 'a';

   printf("real: %c %s\n", ch, strrchr(str, ch));
   printf("me: %c %s\n", ch, ft_strrchr(str, ch));
   printf("them: %c %s\n", ch, example(str, ch));
   return(0);
}*/
