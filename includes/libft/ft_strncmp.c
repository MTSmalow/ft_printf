/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 20:06:39 by edmedeir          #+#    #+#             */
/*   Updated: 2026/06/01 13:42:43 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t siz)
{
	size_t	cont;

	cont = 0;
	while (cont < siz && (str1[cont] || str2[cont]))
	{
		if (str1[cont] == str2[cont])
			cont++;
		else
			return ((unsigned char) str1[cont] - (unsigned char) str2[cont]);
	}
	return (0);
}
