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
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	int p;
	int i = 0;
	int j;

	size_t numarr[11] = {5, 7, 7, 4, 4, 4, 3, 4, 0, 0, 6};
	const char s1arr[11][11] = {"salut", "test", "testss", 
	"test", "", "test", "abcdefghij", "abcdefgh", 
	"zyxbcdefgh", "abcdefgh", "test\200"};
	const char s2arr[11][11] = {"salut", "testss", 
	"test", "tEst", "test", "", "abcdefgxyz", 
	"abcdwxyz", "abcdwxyz", "", "test\0"};
	while (i < 12)
	{
		p = strncmp(s1arr[i], s2arr[i], numarr[i]);
		j = ft_strncmp(s1arr[i], s2arr[i], numarr[i]);
		if (p == j)
			printf("equal %d\n", p);
		else
			printf("not equal: %d != %d\n", p, j);
		i++;		
	}
	printf("me: %d\nre: %d\n", ft_strncmp("test\200", "test\0", 6), 
	strncmp("test\200", "test\0", 6));
	
	return (0);
}
*/