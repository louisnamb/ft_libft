/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:18:07 by lnambaji          #+#    #+#             */
/*   Updated: 2022/01/25 10:18:08 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	char	*result;
	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	while (s1[j])
		result[i++] = (char)s1[j++];
	j = 0;
	while (s2[j])
		result[i++] = (char)s2[j++];
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    char *source = "Louis";
    char *p2 = "Nambajimana";

    printf("real: %s\n", ayo(source, p2));
    printf("ft: %s", ft_strjoin(source, p2));
    return (0);
}*/
