/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:28:04 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/26 11:30:27 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int d)
{
	return (d >= '0' && d <= '9');
}

int	ft_atoi(char *str)
{
	int	res;
	int	s;

	res = 0;
	s = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			s *= -1;
	while (ft_isdigit(*str))
		res = (res * 10) + (*str++ - '0');
	return (res * s);
}
