/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealislam <ealislam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:21:03 by ealislam          #+#    #+#             */
/*   Updated: 2023/11/06 11:32:19 by ealislam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (src == NULL && len == 0)
		return (NULL);
	while (j <= len && j <= ft_strlen(src))
	{
		i = 0;
		while (i + j < len && to_find[i] && to_find[i] == src[j + i])
		{
			i++;
		}
		if (!to_find[i])
			return ((char *)src + j);
		j++;
	}
	return (NULL);
}
