/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 10:16:08 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/29 10:28:28 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*i;

	if (lst && del)
	{
		while (*lst)
		{
			i = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = i;
		}
		*lst = NULL;
	}
}
