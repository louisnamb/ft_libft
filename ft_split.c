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

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		p;

	p = 0;
	s2 = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!s2)
		return (0);
	while (s1[p])
	{
		s2[p] = s1[p];
		p++;
	}
	s2[p] = 0;
	return (s2);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*src && i + 1 < size)
	{
		*dst++ = *src++;
		++i;
	}
	if (i < size)
		*dst = 0;
	while (*src++)
		++i;
	return (i);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substring;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (0);
	ft_strlcpy(substring, s + start, len + 1);
	return (substring);
}

int	num_splits(const char *str, char c)
{
	size_t	j;
	size_t	index;

	index = 0;
	j = 0;
	while (str[index] && str)
	{
		if (str[index] != c)
		{
			j++;
			while (str[index] == c && str[index])
				index++;
		}
		else
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

	if (!s)
		return (NULL);
	j = -1;
	i = 0;
	split = (char **)malloc(sizeof(char *) * (num_splits(s, c) + 1));
	if (!split)
		return (NULL);
	split[num_splits(s, c)] = 0;
	while (++j < num_splits(s, c))
	{
		while (s[i] == c)
			i++;
		split[j] = ft_substr(s, i, sz_wrd(s, c, i));
		if (!split[j])
		{
			freearr(split, j);
			return (NULL);
		}
		i += sz_wrd(s, c, i);
	}
	return (split);
}

#include <stdio.h>

int main()
{
    int p = 0;
	
    char **str = ft_split("test split", ' ');
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
