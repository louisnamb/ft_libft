/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:51:58 by lnambaji          #+#    #+#             */
/*   Updated: 2022/03/16 17:47:02 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	neg;

	num = 0;
	i = 0;
	neg = 1;
	while (!ft_isdigit(*str) && *str != '-'
		&& *str != '+' && !ft_isalpha(*str) && *str != '\e')
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str && ft_isdigit(*str))
	{
		num = num * 10 + *str - 48;
		str++;
	}
	return (neg * num);
}
/*
int	example(const char *str)
{
	int	i;
	int	num;
	int	neg;

	num = 0;
	i = 0;
	neg = 1;
	while (*str == '\t' || *str == '\n' || *str == '\f' 
	|| *str == '\r')
		str++;
	if (str[0] == '-')
		neg = -1;
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		num = num * 10 + str[i] - 48;
		i++;
	}
	return (neg * num);
}


#include <stdio.h>

int main()
{
	int p;
	int i = 0;
	int j;
	
	const char s1arr[21][20] = {"546:5", "-4886", "+548", "054854", 
	"000074", "+-54", "-+48", "--47", "++47", "+47+5", "-47-5", 
	"\e475", "\t\n\r\v\f  469 \n", "-2147483648", "2147483647", 
	"\t\n\r\v\fd469 \n", "\n\n\n  -46\b9 \n5d6", 
	"\n\n\n  -46\b9 \n5d6","\t\n\r\v\f  469 \n"};
	while (i < 22)
	{
		p = ft_atoi(s1arr[i]);
		j = atoi(s1arr[i]);
		if (p == j)
			printf("correct: %d == %d\n", p, j);
		else
			printf("%d) Input given: %s:\n\tExpected: %d\n\tGot: %d\n", 
			i, s1arr[i], j, p);
		i++;		
	}
    return (0);
}*/