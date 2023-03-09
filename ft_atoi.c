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

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	neg;

	num = 0;
	i = 0;
	neg = 1;
	while (*str == '\t' || *str == '\n' || *str == '\f' || *str == '\r')
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
/*int main()
{
    char *num = "23452";
    printf("ft: %d\n", ft_atoi(num));
    printf("real: %d\n", atoi(num));
    return (0);
}*/
