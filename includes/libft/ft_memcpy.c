/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 11:44:21 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/19 20:08:17 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *des, const void *or, size_t len)
{
	unsigned char	*p;
	unsigned char	*o;
	size_t			i;

	if (!des && !or)
		return (des);
	p = (unsigned char *)des;
	o = (unsigned char *)or;
	i = 0;
	while (i < len)
	{
		p[i] = o[i];
		i++;
	}
	return (des);
}
