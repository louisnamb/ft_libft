/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:06:48 by lnambaji          #+#    #+#             */
/*   Updated: 2022/03/16 17:48:13 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		p;
	int		i;

	i = 0;
	p = 0;
	while (s1[i])
		i++;
	s2 = (char *)malloc(sizeof(char) * (i + 1));
	if (!s2)
		return (0);
	while (s1[p])
	{
		s2[p] = s1[p];
		p++;
	}
	s2[p] = '\0';
	return (s2);
}
