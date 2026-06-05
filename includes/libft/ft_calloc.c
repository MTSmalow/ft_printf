/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 09:44:14 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/26 11:38:33 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*ptr;
	size_t	cont;
	size_t	i;

	if (num == 0 || size == 0)
		return (malloc(1));
	cont = num * size;
	if (size != 0 && cont / size != num)
		return (0);
	ptr = (char *)malloc(cont);
	if (!ptr)
		return (0);
	i = 0;
	while (i < cont)
			ptr[i++] = 0;
	return (ptr);
}
