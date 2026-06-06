/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 10:46:02 by edmedeir          #+#    #+#             */
/*   Updated: 2026/06/06 10:01:46 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstmap_clear(t_list **nlst, void *content, void (*del)(void *))
{
	del(content);
	ft_lstclear(nlst, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*n;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	nlst = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
		{
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		n = ft_lstnew(content);
		if (!n)
		{
			ft_lstmap_clear(&nlst, content, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, n);
		lst = lst->next;
	}
	return (nlst);
}
