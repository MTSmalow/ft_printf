/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 22:11:30 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/25 16:58:16 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int valor, size_t num)
{
	unsigned char		*p;
	size_t				c;

	c = 0;
	p = (unsigned char *)ptr;
	while (c < num)
	{
		if (p[c] == (unsigned char)valor)
			return ((void *)&p[c]);
		c++;
	}
	return (0);
}
