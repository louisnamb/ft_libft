/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:29:07 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/10 15:59:45 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lenNum(long num)
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
	int	len;
	long	i;

	i = n;
	len = lenNum(i);
	str = (char *)malloc(sizeof(char) + (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (i < 0)
	{
		str[0] = '-';
		i = i * -1;
	}
	while (i > 0)
	{
		str[len] = 48 + (i % 10);
		i = i / 10;
		len--;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	int i = 0;
	char *p;
	char outputs[11][12] = {"0","9", "-9", "10", "-10", "8124", "-9874", "543000", "-2147483648","2147483647"};
	long inputs[11] = {0, 9, -9, 10, -10, 8124, -9874, 543000, 2147483648LL, 2147483647};
	while (i < 11)
	{
		p = ft_itoa(inputs[i]); 
		if (p == outputs[i])
			printf("Correct:");
	//	printf("%s %s\n", p, outputs[i]);
		printf("%d: %s\n", i, ft_itoa(inputs[i]));
		i++;
	}
    return (0);
}*/