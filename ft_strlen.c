/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:11:44 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/23 11:05:44 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

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
	char *str = "louis nambajimana";
    if (strlen(str) == ft_strlen(str))
		printf("Correct\n");
	else
		printf("Incorrect\n");

	printf("%zu", 5 * sizeof(int));
	return (0);
}*/
