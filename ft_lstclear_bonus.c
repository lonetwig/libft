/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealislam <ealislam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:38:28 by ealislam          #+#    #+#             */
/*   Updated: 2023/11/06 08:58:21 by ealislam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*tmp_to_free;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	tmp = *lst;
	while (tmp)
	{
		tmp_to_free = tmp;
		del(tmp->content);
		tmp = tmp_to_free->next;
		free(tmp_to_free);
	}
	*lst = NULL;
}
