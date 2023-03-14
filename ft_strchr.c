/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:26:14 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/10 15:02:39 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*str;

	str = s;
	if (str)
	{
		while (*str != '\0')
		{
			if (*str == (char)c)
				return ((char *)str);
			str++;
		}
		if ((char)c == '\0')
			return ((char *)str);
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int main() {
	char *str = "hello world";
	int c = 'r';
	printf("ft_strchr: %s strchr: %s\n", ft_strchr(str, c), strchr(str, c));	
	return (0);
}*/