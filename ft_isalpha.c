/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:21:49 by lnambaji          #+#    #+#             */
/*   Updated: 2022/01/17 17:16:47 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}

/*
#include <ctype.h> 
int main()
{
	char c;
    c = 'U';
    printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));
	printf("\nft: Result when uppercase alphabet is passed: %d\n", ft_isalpha(c));
    c = 'c';
    printf("\nResult when lowercase alphabet is passed: %d", isalpha(c));
	printf("\nft: Result when lowercase alphabet is passed: %d\n", ft_isalpha(c));
    c='/';
    printf("\nResult when non-alphabetic character is passed: %d", isalpha(c));
	printf("\nft: Result when non-alphabetic character is passed: %d\n", ft_isalpha(c));

    return 0;
}*/
