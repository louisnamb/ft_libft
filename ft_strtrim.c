/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:49:08 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/24 15:45:32 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_setchkr(char c, char const *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *find)
{
	size_t	start;
	size_t	end;
	char	*substring;
	size_t	i;

	start = 0;
	end = ft_strlen(str);
	while (str[start] && ft_setchkr(str[start], find))
		start++;
	while (end > start && ft_setchkr(str[end - 1], find))
		end--;
	substring = malloc(sizeof(char *) * (end - start + 1));
	if (!substring)
		return (NULL);
	i = 0;
	while (i + start < end)
	{
		substring[i] = str[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
/*
int main()
{
    char *p1 = "suyterfwty james my name is suyterfwty";
    char *p2 = "suyterfwty";
    printf("ft:%s", ft_strtrim(p1, p2));
    return  (0);
}*/
