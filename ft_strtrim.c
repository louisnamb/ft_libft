/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:49:08 by lnambaji          #+#    #+#             */
/*   Updated: 2022/01/25 10:49:11 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_real_trim(char const *str, char const *find, size_t iterator, int pos)
{
	char	*trim;

	if (!(trim = (char *)malloc(ft_strlen(str) + 1)))
		return (0);
	while (str[iterator])
	{
		if (iterator >= 0 && iterator <= ft_strlen(find))
			iterator = ft_strlen(find);
		else if (iterator >= (ft_strlen(str) - ft_strlen(find)))
			iterator += ft_strlen(str) - ft_strlen(find);
		trim[pos++] = str[iterator++];
	}
	trim[pos] = '\0';
	return  (trim);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int	p;
	int	j;
	
	p = 0;
	j = 0;
	if (!s1)
		return (0);
	return (ft_real_trim(s1, set, p, j));
}
/*
int main()
{
    char *p1 = "suyterfwty james my name is suyterfwty";
    char *p2 = "suyterfwty";
  //  printf("real:%d\n", trim(p1, p2));
    printf("ft:%s", ft_strtrim(p1, p2));
    return  (0);
}*/
