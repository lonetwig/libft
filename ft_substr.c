/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealislam <ealislam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:15:12 by ealislam          #+#    #+#             */
/*   Updated: 2023/11/06 11:40:14 by ealislam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_malloc_size(char const *s, unsigned int start, size_t len)
{
	if (ft_strlen(s + start) < len)
		return (ft_strlen(s + start));
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		sub_str = malloc(1);
		if (sub_str == NULL)
			return (NULL);
		sub_str[0] = '\0';
		return (sub_str);
	}
	sub_str = malloc (find_malloc_size(s, start, len) + 1);
	if (sub_str == NULL)
		return (NULL);
	while (i < len && s[start])
	{
		sub_str[i] = s[start];
		i++;
		start++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
