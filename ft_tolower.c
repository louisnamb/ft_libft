/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:14:10 by lnambaji          #+#    #+#             */
/*   Updated: 2022/01/19 17:14:11 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_tolower(int c)
{
    if (c > 65 && c  < 90)
        c = c + 32;
    return (c);
}
/*
//#include "libft.h"
#include <stdio.h>
#include <ctype.h>
int main()
{
    char a[] = {'B', 'U', 'M', 'P', 'y', 's', 't', 'q', ')'};
    int i = 0;
    while (a[i])
    {
        printf("%c", ft_tolower(a[i]));
        printf("| %c", tolower(a[i]));
        printf("\n");
        i++;
    }
    return (0);
}*/
