/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealislam <ealislam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:19:52 by ealislam          #+#    #+#             */
/*   Updated: 2023/11/06 10:06:17 by ealislam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	c2;

	i = 0;
	str = (unsigned char *)dst;
	c2 = c;
	while (i < n)
	{
		str[i] = c2;
		i++;
	}
	return (dst);
}
