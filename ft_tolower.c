/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:14:10 by lnambaji          #+#    #+#             */
/*   Updated: 2023/03/24 15:46:46 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c += 32;       
    }
    return (c);
}
/*#include <stdio.h>
#include <ctype.h>
int main()
{
    char a[] = {'B', 'U', 'M', 'P', 'y', 's', 't', 'q', ')'};
    int i = 0;
    while (a[i])
    {
        printf("%c", ft_tolower(a[i]));
        printf("| %c\n", tolower(a[i]));
        i++;
    }
    return (0);
}*/
