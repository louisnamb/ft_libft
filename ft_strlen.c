/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <lnambaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:11:44 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/29 11:59:15 by lnambaji         ###   ########.fr       */
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
