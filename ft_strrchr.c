/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:53:00 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/27 12:12:48 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ret = (char *)s;
		++s;
	}
	if (!c)
		ret = ((char *)s);
	return (ret);
}
/*
#include <string.h>
#include <stdio.h>
int main () {
	char s[] = "tripouille";
	char s2[] = "ltripouiel";
	char s3[] = "";
	char	*src = "abbbbbbbb";
	if (ft_strrchr("teste", 1024) == strrchr("teste", 1024))
		printf("correct\n");
	else
		printf("incorrect: expected: %s got: %s\n", strrchr("teste", 1024),
		 ft_strrchr("teste", 1024));
	
	if (ft_strrchr(s, 't' + 256) == strrchr(s, 't' + 256))
		printf("correct\n");
	else
		printf("incorrect: expected: %s\n", strrchr("teste", 1024));
	
	if (ft_strrchr(s3, 0) == ft_strrchr(s3, 0))
		printf("correct\n");
	else
		printf("incorrect\n");

	if (strrchr(src, 'a') == ft_strrchr(src, 'a'))
		printf("correct\n");
	else
		printf("incorrect\n");
	return(0);
}*/
