/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:37:37 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/21 16:11:24 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	charcmp(const char s1, const char s2)
{
	if ((unsigned char)s1 > (unsigned char)s2)
		return (1);
	else if ((unsigned char)s1 == (unsigned char)s2)
		return (0);
	else	
		return (-1);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (charcmp(s1[i], s2[i]));
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
int	ft_print_result(int n)
{
	if (n > 0)
		n = 1;
	else if (n < 0)
		n = -1;
	else
		n = 0;
	return (n);
}

#include <stdio.h>
#include <string.h>
int main()
{
	unsigned char str1[10] = "test\200";
	unsigned char str2[10] = "test\0";
	size_t n = 6;
	if (ft_print_result(ft_strncmp((char *)str1, (char *)str2, n)) == ft_print_result(strncmp((char *)str1, (char *)str2, n)))
		printf("correct) Expected: %d got: %d", strncmp((char *)str1, (char *)str2, n), ft_strncmp((char *)str1, (char *)str2, n));
	else
		printf("incorrect Expected: %d got: %d", strncmp((char *)str1, (char *)str2, n), ft_strncmp((char *)str1, (char *)str2, n));
	
	return (0);
}
*/