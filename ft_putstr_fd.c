/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:04:04 by lnambaji          #+#    #+#             */
/*   Updated: 2022/02/07 17:04:14 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
        	return ;
	while (*s)
		write(fd, &*s++, 1);
}
/*
int main()
{
	const char *a = "hello";
	int b = 1;
	printf("%c", ft_putstr_fd(a, b));
	return (0);
}*/
