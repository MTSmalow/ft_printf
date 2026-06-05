/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 16:41:33 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/26 09:18:52 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char		*p1;
	unsigned char		*p2;
	size_t				c;

	c = 0;
	p1 = (unsigned char *)ptr1;
	p2 = (unsigned char *)ptr2;
	while (c < num)
	{
		if (p1[c] != p2[c])
			return ((int)p1[c] - (int)p2[c]);
		c++;
	}
	return (0);
}
