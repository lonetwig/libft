/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealislam <ealislam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:52:43 by ealislam          #+#    #+#             */
/*   Updated: 2023/11/08 08:26:39 by ealislam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr(long long l_n, int fd)
{
	char	c;

	if (l_n < 10)
	{
		c = (l_n % 10) + '0';
		write(fd, &c, 1);
		return ;
	}
	putnbr(l_n / 10, fd);
	c = (l_n % 10) + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long long	l_n;

	l_n = n;
	if (fd < 0)
		return ;
	if (n < 0)
	{
		l_n = -l_n;
		write(fd, "-", 1);
	}
	putnbr(l_n, fd);
}
