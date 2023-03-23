/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:13:06 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/23 12:59:35 by lnambaji         ###   ########.fr       */
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

int	num_splits(const char *str, char c, int *index)
{
	size_t	j;
	size_t	trigger;

	j = 0;
	trigger = 0;
	while (*(str + *index) == c && *(str + *index))
		index++;
	if (*(str + *index))
		*index = 0;
	while (*(str + *index))
	{
		if (*(str + *index) != c && !trigger)
		{
			trigger = 1;
			j++;
		}
		else if (*(str + *index) == c)
			trigger = 0;
		(*index)++;
	}
	return (j);
}

char	*cpyup2del(char const *s, int beg, int fin)
{
	size_t	k;
	char	*str;

	k = 0;
	str = (char *)malloc(sizeof(char) * ((fin - beg) + 2));
	if (!str)
		return (NULL);
	if ((size_t)beg >= ft_strlen(s))
		return (str);
	while (beg < fin && s[beg])
		str[k++] = s[beg++];
	str[k] = '\0';
	return (str);
}

int	sz_wrd(char const *str, char c, int *i)
{
	int			sz;
	const char	*s;

	s = (str + *i);
	sz = 0;
	while (*s && *s != c)
	{
		sz++;
		s++;
	}
	return (sz);
}

char	**ft_split(char const *s, char c)
{
	int		*i;
	char	**split;
	int		j;
	int		sz_nxt_wrd;

	j = -1;
    i = (int*)malloc(sizeof(int));
	*i = 0;
	split = (char **)malloc(sizeof(char *) * (num_splits(s, c, i) + 1));
	if (!s || !split)
		return (NULL);
	while (j++ < num_splits(s, c, i) && *(s + *i))
	{
		while (*(s + *i) == c)
			i++;
		sz_nxt_wrd = sz_wrd(s, c, i);
		if (!(split[j] = cpyup2del(s, *i, sz_nxt_wrd)))
		{
			freearr(split, j);
			return (NULL);
		}
		*i += sz_nxt_wrd;
	}
	split[j] = NULL;
	return (split);
}

int main()
{
	int p = 0;
	char **str = ft_split("          ", ' ');
	printf("size of:%zu\n", sizeof(""));
	while (str[p])
	{
		printf("real: %s\n", str[p]);
		p++;
	}
	printf("p = %d\n", p);
	int i = 0;
	int j = 0;
	while (str[p])
	{
		free(str[p]);
		p--;
	}
	return (0);
}