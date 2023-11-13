/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealislam <ealislam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:20:04 by ealislam          #+#    #+#             */
/*   Updated: 2023/11/05 16:15:12 by ealislam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s2;
	char	c1;

	s2 = (char *)s;
	c1 = c;
	while (*s2)
	{
		if (*s2 == c1)
		{
			return (s2);
		}
		s2++;
	}
	if (*s2 == '\0' && c1 == '\0')
		return (s2);
	return (NULL);
}
