/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 09:17:35 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/29 12:15:00 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		cont;
	char	*ptr;

	cont = 0;
	while (src[cont])
		cont++;
	ptr = (char *)malloc (cont + 1);
	cont = 0;
	if (!ptr)
		return (0);
	while (src[cont])
	{
		ptr[cont] = src[cont];
		cont++;
	}
	ptr[cont] = '\0';
	return (ptr);
}
