/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:18:07 by lnambaji          #+#    #+#             */
/*   Updated: 2022/02/25 17:53:00 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (!(str = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	while ((int)size >= 0)
	{
		str[(int)size] = '\0';
		size--;
	}
	return (str);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ayo(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
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

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = -1;
	j = -1;
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j])
		str[i + j] = s2[j];
	str[i + j] = '\0';
	free((char *)s1);
	free((char *)s2);
	return (str);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    char *source = "Louis";
    char *p2 = "Nambajimana";
	//printf("real: %s\n", ayo("test", NULL));
   // printf("real: %s\n", ayo(source, p2));
    printf("ft: %s", ft_strjoin("test", NULL));
    return (0);
}*/