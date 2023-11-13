/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealislam <ealislam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:51:04 by ealislam          #+#    #+#             */
/*   Updated: 2023/11/08 09:58:50 by ealislam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*work_on_branch(t_list *lst, void *(*f)(void *))
// {
// 	t_list	*current;

// 	current = ft_lstnew(f(lst->content));
// 	if (current == NULL)
// 		return (NULL);
// 	return (current);
// }

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*head;
// 	t_list	*current;

// 	if (lst == NULL || del == NULL || f == NULL)
// 		return (NULL);
// 	head = NULL;
// 	head = work_on_branch(lst, f);
// 	if (head == NULL)
// 		return (NULL);
// 	current = head;
// 	lst = lst->next;
// 	while (lst)
// 	{
// 		current->next = work_on_branch(lst, f);
// 		lst = lst->next;
// 		if (current->next == NULL)
// 		{
// 			ft_lstclear(&head, del);
// 			return (NULL);
// 		}
// 		current = current->next;
// 	}
// 	return (head);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;
	void	*content;

	head = NULL;
	if (lst == NULL || del == NULL || f == NULL)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (node == NULL)
		{
			del(content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
