/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:01:59 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/19 20:08:17 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*p;

	p = (char *)str;
	while (*p)
		p++;
	while (p >= str)
	{
		if (*p == (char)c)
			return (p);
		p--;
	}
	return (0);
}
