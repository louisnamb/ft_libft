/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:13:06 by lnambaji          #+#    #+#             */
/*   Updated: 2022/02/25 17:34:40 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int spacechk(char c)
{
	if (c == '\t' || c == '\n'  || c == '\v' || c ==  '\f' || c ==  '\r' || c == ' ')
		return (1);
	return (0);
}

int	num_splits(const char *str, char c)
{
	size_t	i;
	size_t	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

char	*cpyup2del(char const *s, int beg, int fin)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * ((fin - beg) + 1));
	if (!str)
		return (NULL);
	while (beg < fin)
		str[i++] = s[beg++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	j;
	int		boolean1;
	size_t	i;

	j = 0;
	i = 0;
	boolean1 = -1;
	split = malloc(sizeof(char *) * (num_splits(s, c) + 1));
	if (!s || !split)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if ((s[i] != c || !spacechk(s[i]))&& boolean1 < 0)
			boolean1 = i;
		else if ((s[i] == c || spacechk(s[i]) || i == ft_strlen(s)) && boolean1 >= 0)
		{
			split[j] = cpyup2del(s, boolean1, i);
			boolean1 = -1;
			j++;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}/*

int main()
{
	char	*string = "      split       this for   me  !       ";
	char d = ' ';
	char **str = ft_split(string, ' ');
	size_t i = 0;
	while (str[i])
	{
		printf("real: %s\n", str[i]);
		i++;
	}
	while (str[i])
	{
		free(str[i]);
		i--;
	}
	return (0);
}*/
