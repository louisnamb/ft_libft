/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:26:14 by lnambaji          #+#    #+#             */
/*   Updated: 2022/01/19 17:26:16 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}/*
#include <stdio.h>
#include <string.h>

int main () {
	const char str[] = "nambajimana";
	const char ch = 'j';
	printf("%c %s\n", ch, strchr(str, ch));
	printf("%c %s\n", ch, ft_strchr(str, ch));
	return(0);
}*/
