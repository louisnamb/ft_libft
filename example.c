/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:59:10 by prossi            #+#    #+#             */
/*   Updated: 2021/09/20 19:17:53 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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


char		*ft_strdup(const char *s1)
{
	char	*s2;
	int		size;

	size = ft_strlen(s1);
	if (!(s2 = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	ft_strcpy(s2, s1);
	return (s2);
}

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	count;

	i = 0;
	count = ft_strlen(src);
	if (dstsize == 0)
		return (count);
	while (dst && src && i < (int)(dstsize - 1)
			&& src[i] != '\0' && dstsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
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

static int	ft_count_word(char const *s, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	char	**strs;
	int		j;

	i = 0;
	j = -1;
	strs = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	strs[ft_count_word(s, c)] = 0;
	while (++j < ft_count_word(s, c))
	{
		while (s[i] == c)
			i++;
		strs[j] = ft_substr(s, i, ft_size_word(s, c, i));
		if (!strs[j])
		{
			ft_free(strs, j);
			return (NULL);
		}
		i += ft_size_word(s, c, i);
	}
	return (strs);
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
    ft_free(str, p - 1);
    return (0);
}