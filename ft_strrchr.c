/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:53:00 by lnambaji          #+#    #+#             */
/*   Updated: 2022/02/28 16:49:50 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == c)
		{
			return ((char *)&s[len]);
		}
		len--;
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
