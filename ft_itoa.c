/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:29:07 by lnambaji          #+#    #+#             */
/*   Updated: 2022/02/28 17:37:44 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*emptyarr(int n)
{
	static int	len;
	char		*str;
	int			t;

	str = (char *)malloc(sizeof(char) * len);
	len = 0;
	t = 0;
	if (n < 0)
	{
		t = 1;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	if (!str)
		return (NULL);
	if (t == 1)
		str[0] = '-';
	return (str);
}

int	convi2c(int num)
{
	if (num >= 10)
		return (convi2c(num / 10));
	return (num);
}

int	intvlen(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	powerto(int n, int num)
{
	int	sum;
	int	i;

	i = 1;
	sum = 1;
	n--;
	while (i++ <= n)
		sum = sum * 10;
	return (num * sum);
}

char	*ft_itoa(int n)
{
	char			*word;
	int				i;
	char			*numbers;
	unsigned int	len;

	len = 0;
	i = 0;
	word = NULL;
	numbers = "0123456789";
	word = emptyarr(n);
	len = intvlen(n);
	if (word[0] == '-')
	{
		i++;
		n *= -1;
	}
	while (n >= 0 && len != 0)
	{
		word[i++] = numbers[convi2c(n) % 10];
		n = n - powerto(len, convi2c(n));
		len--;
	}
	return (word);
}
/*
int main()
{
    int i = 23456;
    printf("final: %s\n", ft_itoa(i));
    return (0);
}*/
