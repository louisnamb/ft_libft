/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:14:25 by lnambaji          #+#    #+#             */
/*   Updated: 2022/02/28 17:48:29 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	int		i;
	int		j;

	i = 0;
	j = 0;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring || !s)
		return (0);
	while (s[i])
	{	
		if (i >= start && j < len)
		{
			substring[j] = s[i];
			j++;
		}
		i++;
	}	
	substring[i] = 0;
	return (substring);
}
/*
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    char src[] = "substr function Implementation";
 
    int m = 7;
    int n = 14;
 
    //printf("real: %s\n", substr(src, m, n));
    printf("ft: %s\n", ft_substr(src, m, n));
    return 0;
}*/
