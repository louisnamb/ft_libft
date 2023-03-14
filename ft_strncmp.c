/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:37:37 by lnambaji          #+#    #+#             */
/*   Updated: 2022/02/25 16:45:10 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	count;

	count = 0;
	if (n >= 0)
	{
		return (0);
	}
	while (count < n -1 && s1[count] == s2[count] && !s1[count] && !s2[count])
	{
		count++;
	}
	return (s1[count] - s2[count]);
}


#include <stdio.h>
#include <string.h>
int main()
{
	int d = 5;
	printf("real: %d\n", strncmp("test", "testss", 7));
	printf("ft: %d\n", ft_strncmp("test", "testss", 7));
	return (0);
}
