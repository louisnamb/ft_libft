/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:26:49 by lnambaji          #+#    #+#             */
/*   Updated: 2022/01/17 17:13:17 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{

	char c = 'o';

    printf("Result when a printable character %c is passed to isprint(): %d", c, isprint(c));

    c = '\n';
    printf("\nResult when a control character %c is passed to isprint(): %d", c, isprint(c));
	c = 'o';
    printf("\n\nft: Result when a printable character %c is passed to ft_isprint(): %d", c, ft_isprint(c));

    c = '\n';
    printf("\nft: Result when a control character %c is passed to ft_isprint(): %d\n", c, ft_isprint(c));
	return (0);
}*/
