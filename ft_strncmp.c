/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:37:37 by lnambaji          #+#    #+#             */
/*   Updated: 2022/02/25 16:45:10 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	count;

	count = 0;
	while (n-- && s1 && s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main()
{
	int d = 5;
	int p;
	int i = 0;
	int j;

	size_t numarr[4] = {7, 7, 4, 4};
	const char s1arr[4][7] = {"test", "testss", "test", ""};
	const char s2arr[4][7] = {"testss", "test", "tEst", "test"};
	while (i < 4)
	{
		p = strncmp(s1arr[i], s2arr[i], numarr[i]);
		j = ft_strncmp(s1arr[i], s2arr[i], numarr[i]);
		if (p == j)
			printf("equal %d\n", p);
		else
			printf("not equal: %d != %d\n", p, j);
		i++;		
	}
	
	return (0);
}
