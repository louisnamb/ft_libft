/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:29:07 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/22 11:14:48 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lennum(long num)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		num = num * -1;
		i++;
	}
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	i;

	i = n;
	len = lennum(i);
	str = (char *)malloc(sizeof(char) + (len));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = 48;
	if (i < 0)
	{
		str[0] = '-';
		i = i * -1;
	}
	while (i > 0)
	{
		str[len--] = 48 + (i % 10);
		i = i / 10;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	int i = 0;
	char *p;
	char outputs[11][12] = {"0","9", "-9", "10", "-10", "8124", 
	"-9874", "543000", "-2147483648","2147483647"};
	long inputs[11] = {0, 9, -9, 10, -10, 8124, -9874, 
	543000, 2147483648LL, 2147483647};
	while (i < 11)
	{
		p = ft_itoa(inputs[i]);
		if (p == outputs[i])
			printf("Correct:");
	//	printf("%s %s\n", p, outputs[i]);
		else
			printf("inccorect: %d: %s\n", i, ft_itoa(inputs[i]));
		i++;
	}
	char *p = ft_itoa(-623);
	printf("p: %s\n\n", p);
	if (strcmp(ft_itoa(-623), "-623") == 0)
 		printf("1correct\n");
	else
		printf("incorrect\n");
 	if (strcmp(ft_itoa(156), "156"))
 		printf("2correct\n");
	else
		printf("incorrect\n");
 	if (strcmp("0", ft_itoa(0)))
 		printf("3correct\n");
	else
		printf("incorrect\n");
    return (0);
}
*/
