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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	chk(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' ||
			c == '\f' || c == '\r' || c == ' ' || c == '\0');
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
	int		boo;
	size_t	i;

	j = 0;
	i = 0;
	boo = -1;
	split = malloc(sizeof(char *) * (num_splits(s, c) + 1));
	if (!s || !split)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if ((s[i] != c || !chk(s[i])) && boo < 0)
			boo = i;
		else if ((s[i] == c || chk(s[i]) || i == ft_strlen(s)) && boo >= 0)
		{
			split[j] = cpyup2del(s, boo, i);
			boo = -1;
			j++;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}

int main()
{
	char **str = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. 
	Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras 
	elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, 
	mi.", 'z');
	int p = 0;
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
}