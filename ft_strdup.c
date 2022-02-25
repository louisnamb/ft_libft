/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:06:48 by lnambaji          #+#    #+#             */
/*   Updated: 2022/01/25 10:06:50 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int	p;
	int	i;
	
	i = 0;
	p = 0;
	while (s1[i])
		i++;
	s2 = (char *)malloc(sizeof(char) * (i + 1));
	if (!s2)
        	return (0);
	while (s1[p])
	{
		s2[p] = s1[p];
		p++;
	}
	return (s2);
}/*
#include <stdio.h>
#include <string.h>
int main()
{
    char source[] = "GeeksForGeeks";
    char* target = strdup(source);
    char *new_target = ft_strdup(source);

    printf("real: %s\n", target);
    printf("ft: %s", new_target);
    return 0;
}*/
