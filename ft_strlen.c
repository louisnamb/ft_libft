/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:11:44 by lnambaji          #+#    #+#             */
/*   Updated: 2022/01/17 13:18:38 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char *a = argv[1];
	char *b = argv[2];
    printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %zu \n\n",strlen(b));

    printf("Length of string a = %d \n",ft_strlen(a));
    printf("Length of string b = %d \n",ft_strlen(b));

	printf("%zu", 5 * sizeof(int));
	return (0);
}*/
