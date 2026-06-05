/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:33:37 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/29 13:10:04 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	cont;

	cont = 0;
	if (dsize == 0)
		return (ft_strlen(src));
	while (cont < dsize - 1 && src[cont])
	{
		dst[cont] = src[cont];
		cont++;
	}
	dst[cont] = '\0';
	return (ft_strlen(src));
}
