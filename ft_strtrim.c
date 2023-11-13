/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealislam <ealislam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:10:15 by ealislam          #+#    #+#             */
/*   Updated: 2023/11/06 11:43:17 by ealislam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(const char *set, const char c)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static void	count_index(int *start, int *end, const char *str, const char *set)
{
	*end = ft_strlen(str) - 1;
	while (*end > 0 && is_set(set, str[*end]))
		(*end)--;
	(*end)++;
	while (*start < *end && is_set(set, str[*start]))
		(*start)++;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*result;
	int		start;
	int		end;

	start = 0;
	end = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	count_index(&start, &end, s1, set);
	str = malloc(end - start + 1);
	if (str == NULL)
		return (NULL);
	result = str;
	while (start < end)
	{
		*str = s1[start];
		str++;
		start++;
	}
	*str = '\0';
	return (result);
}
