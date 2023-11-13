/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealislam <ealislam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:21:19 by ealislam          #+#    #+#             */
/*   Updated: 2023/11/05 16:15:48 by ealislam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	char	c1;
	int		i;

	s1 = (char *)s;
	c1 = c;
	i = 0;
	i = ft_strlen(s1);
	while (i >= 0)
	{
		if (s1[i] == c1)
			return (s1 + i);
		i--;
	}
	return (NULL);
}
