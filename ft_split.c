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

/*
static int	num_splits(char const *s, char c)//tells us how many arrays we need
{	//works because it counts the number of times c appears
	size_t	i;//and adds that by one to include the extra array

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i + 1);
}*/
static int	num_splits(const char *str, char c)
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

static char	*cpyup2del(char const *s, int beg, int fin)
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
	split = malloc(sizeof(char *) * (num_splits(s, c)) + 1);
	if (!s || !split)
		return (NULL);
	while (i++ <= ft_strlen(s))
	{
		if (s[i] != c && boolean1 < 0)
			boolean1 = i;
		else if ((s[i] == c || i == ft_strlen(s)) && boolean1 >= 0)
		{
			split[j++] = cpyup2del(s, boolean1, i);
			boolean1 = -1;
		}
	}
	split[j] = 0;
	return (split);
}
/*
int main()
{
	char *sp = "abcidefghijk";
	char d = 'i';
	printf("real: %s\n", ft_split(sp, d)[0]);
	printf("real: %s\n", ft_split(sp, d)[1]);
	printf("real: %s\n", ft_split(sp, d)[2]);
	return (0);
}*/
