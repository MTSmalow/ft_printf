/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 11:09:20 by edmedeir          #+#    #+#             */
/*   Updated: 2026/06/06 08:16:02 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpointer_fd(unsigned long n, int fd)
{
	char	result;
	char	*b;

	b = "0123456789abcdef";
	if (n > 15)
		ft_putpointer_fd(n / 16, fd);
	result = b[n % 16];
	write(fd, &result, 1);
}

int	ft_count_ptr_digits(unsigned long n)
{
	int	cont;

	cont = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		cont++;
	}
	return (cont);
}

int	ft_count_digits_long(long nbr)
{
	int	cont;

	cont = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr /= 10;
		cont++;
	}
	return (cont);
}
