/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealislam <ealislam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:00:51 by ealislam          #+#    #+#             */
/*   Updated: 2023/11/05 16:09:48 by ealislam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	put_nbr(long long l_n, char *str)
{
	if (l_n < 0)
		l_n = -l_n;
	if (l_n < 10)
	{
		*str = (l_n % 10) + '0';
		return ;
	}
	put_nbr(l_n / 10, str - 1);
	*str = (l_n % 10) + '0';
}

int	get_str_size(int n)
{
	long long		l_n;
	unsigned int	str_size;

	str_size = 0;
	l_n = n;
	if (n == 0)
		return (1);
	if (l_n < 0)
		l_n = -l_n;
	while (l_n > 0)
	{
		l_n /= 10;
		str_size++;
	}
	return (str_size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	int		str_len;

	str_len = get_str_size(n);
	if (n < 0)
		is_neg = 1;
	else
		is_neg = 0;
	str = malloc(str_len + 1 + is_neg);
	if (str == NULL)
		return (NULL);
	put_nbr((long long)n, str + str_len - 1 + is_neg);
	str[str_len + is_neg] = '\0';
	if (is_neg)
		str[0] = '-';
	return (str);
}
