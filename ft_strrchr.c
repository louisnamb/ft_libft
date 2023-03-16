/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:53:00 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/10 15:07:08 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len--)
	{
		if (s[len] == c)
			return ((char *)&s[len]);
	}
	if (s[len] == c)
		return ((char *)&s[len]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main () {

   const char str[] = "bonjour";
   const char ch = 'b';

   printf("re: %c %s\n", ch, strrchr(str, ch));
   printf("me: %c %s\n", ch, ft_strrchr(str, ch));
  // printf("them: %c %s\n", ch, example(str, ch));
   return(0);
}*/