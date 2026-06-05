/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 11:52:45 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/25 16:56:09 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove_check(void *dest, const void *src, size_t cont)
{
	if (dest == src || cont == 0)
		return (dest);
	return (0);
}

void	ft_memmove_forward(unsigned char *d, unsigned char *s, size_t cont)
{
	size_t	cont2;

	cont2 = 0;
	while (cont2 < cont)
	{
		d[cont2] = s[cont2];
		cont2++;
	}
}

void	ft_memmove_backward(unsigned char *d, unsigned char *s, size_t cont)
{
	while (cont > 0)
	{
		d[cont - 1] = s[cont - 1];
		cont--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t cont)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (ft_memmove_check(dest, src, cont) != 0)
		return (dest);
	if (dest < src)
		ft_memmove_forward(d, s, cont);
	else
		ft_memmove_backward(d, s, cont);
	return (dest);
}
