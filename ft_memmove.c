/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealislam <ealislam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:19:42 by ealislam          #+#    #+#             */
/*   Updated: 2023/11/06 09:38:35 by ealislam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	char		*d;
	const char	*s;

	i = (int)len - 1;
	d = dst;
	s = src;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (i >= 0)
	{
		d[i] = s[i];
		i--;
	}
	return (dst);
}
