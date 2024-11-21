/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:30:03 by vpirotti          #+#    #+#             */
/*   Updated: 2024/11/21 14:31:21 by vpirotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new;
	t_list	*head;
	void	*temp;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	ptr = lst;
	while (ptr)
	{
		temp = f(ptr ->content);
		new = ft_lstnew(temp);
		if (!new)
		{
			del(temp);
			ft_lstclear(&head, del);
			return (head);
		}
		ft_lstadd_back(&head, new);
		ptr = ptr ->next;
	}
	return (head);
}
