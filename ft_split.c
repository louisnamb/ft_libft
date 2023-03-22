/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:13:06 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/14 13:01:50 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	freearr(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
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
	if ((size_t)beg >= ft_strlen(s))
		return (str);
	while (beg < fin && str[i])
		str[i++] = s[beg++];
	str[i] = '\0';
	return (str);
}

int	sz_wrd(char const *str, char c, int i)
{
	int	sz;

	sz = 0;
	while (str[i] && str[i] != c)
	{
		sz++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		j;
	size_t	i;
	int		sz_nxt_wrd;

	j = -1;
	i = 0;
	split = (char **)malloc(sizeof(char *) * (num_splits(s, c) + 1));
	if (!s || !split)
		return (NULL);
	while (j++ < num_splits(s, c))
	{
		while (s[i] == c)
			i++;
		sz_nxt_wrd = sz_wrd(s, c, i);
		if (!(split[j] = cpyup2del(s, i, sz_nxt_wrd)))
		{
			freearr(split, j);
			return (NULL);
		}
		i += sz_nxt_wrd;
	}
	split[j] = NULL;
	return (split);
}
/*
int main()
{
	int p = 0;
	char **str = ft_split("lorem ipsum dolor sitr adipiscing mi.\0", 'z');
	
	while (str[p])
	{
		printf("real: %s\n", str[p]);
		p++;
	}
	while (str[p])
	{
		free(str[p]);
		p--;
	}
	return (0);
}*/