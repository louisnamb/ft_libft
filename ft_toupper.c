/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:01:02 by lnambaji          #+#    #+#             */
/*   Updated: 2022/01/19 17:01:06 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_toupper(int c)
{
    if (c > 97 && c < 122)
    {
        c = c - 32;
    }
    return (c);
}
/*
int main()
{
    char a[] = {'B', 'U', 'M', 'P', 'y', 's', 't', 'q'};
    int i = 0;
    while (a[i])
    {
        printf("%c", ft_toupper(a[i]));
        printf(" %c", toupper(a[i]));
        printf("\n");
        i++;
    }
    return (0);
}*/
