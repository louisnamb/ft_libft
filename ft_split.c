/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:13:06 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/24 15:45:20 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_splits(const char *str, char c)
{
	size_t	j;
	size_t	trigger;
	size_t	index;

	index = 0;
	j = 0;
	trigger = 0;
	while (str[index])
	{
		if (str[index] != c && !trigger)
		{
			trigger = 1;
			j++;
		}
		else if (str[index] == c)
			trigger = 0;
		index++;
	}
	return (j);
}

int	sz_wrd(char const *str, char c, int i)
{
	int			sz;

	sz = 0;
	while (str[i] && str[i] != c)
	{
		sz++;
		i++;
	}
	return (sz);
}

void	freearr(char **strs, int j)
{
	while (j-- > 0 && strs && strs[j])
		free(strs[j]);
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**split;
	int		j;
	size_t	sz_nxt_wrd;
	int		words;

	words = num_splits(s, c);
	j = -1;
	i = 0;
	if (!s || !(split = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (j++ < words)
	{
		while (s[i] == c)
			i++;
		sz_nxt_wrd = sz_wrd(s, c, i);
		if (!(split[j] = ft_substr(s, i, sz_nxt_wrd)))
		{
			freearr(split, j);
			return (NULL);
		}
		i += sz_nxt_wrd;
	}
	split[j] = 0;
	return (split);
}
/*
#include <stdio.h>

int main()
{
    int p = 0;
    char **str = ft_split("split  ||this|for|me|||||!|", '|');
    if (str == NULL)
        return (1);
    while (str && str[p]) 
    {
        printf("real: %s\n", str[p]);
        p++;
    }
    printf("p = %d\n", p);
    freearr(str, p - 1);
    return (0);
}
*/
