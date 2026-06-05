/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 10:54:42 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/28 11:07:56 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*sm;

	if (!s || !f)
		return (0);
	i = 0;
	sm = (char *)malloc (ft_strlen(s) + 1);
	if (!sm)
		return (0);
	while (s[i])
	{
		sm[i] = f(i, s[i]);
		i++;
	}
	sm[i] = '\0';
	return (sm);
}
