/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 07:41:10 by edmedeir          #+#    #+#             */
/*   Updated: 2026/06/05 09:40:18 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_count_digits(int n)
{
	int	cont;

	cont = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		cont++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		cont++;
	}
	return (cont);
}

int	ft_count_unsigned_digits(unsigned int n)
{
	int	cont;

	cont = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		cont++;
	}
	return (cont);
}

void	ft_putunsigned_fd(unsigned int n, int fd)
{
	char	result;


	if (n >= 10)
		ft_putunsigned_fd(n / 10, fd);
	result = n % 10 + '0';
	write(fd, &result, 1);
}
