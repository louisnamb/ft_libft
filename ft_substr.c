/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:14:25 by lnambaji          #+#    #+#             */
/*   Updated: 2022/02/28 17:48:29 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substring;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring || !s)
		return (0);
	while (s[i])
	{	
		if (i >= start && j < len)
		{
			substring[j] = s[i];
			j++;
		}
		i++;
	}	
	substring[i] = 0;
	return (substring);
}
char	*subbstr(const char *s, unsigned int start, size_t len)
{
	char	*temp;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((size_t)start > len)
	{
		if ((temp = malloc(1)) == NULL)
			return (NULL);
		temp[0] = '\0';
		return (temp);
	}
	if ((temp = calloc((len + 1), sizeof(char))) == NULL)
		return (NULL);
	while (start < (unsigned int)len)
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	return (temp);
}
 
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    char	str[27] = "lorem ipsum dolor sit amet";
	//char	src[27] = "lorem ipsum dolor sit amet";
	/*int i = 0;
	int m[5] = {0, 7, 7, 0, 400};
	int n[5] = {10, 10, 0, 0, 20};
	while (i < 6)
	{
		strcpy(str, "lorem ipsum dolor sit amet");
        strcpy(src, "lorem ipsum dolor sit amet");
		printf("%s\t|| %s\n", subbstr(src, m[i], n[i]), ft_substr(str, m[i], n[i]));
		i++;
	}*/
	printf("%s", ft_substr(str, 7, 10));

    return 0;
}