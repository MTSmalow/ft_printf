/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 07:41:10 by edmedeir          #+#    #+#             */
/*   Updated: 2026/06/05 10:51:44 by edmedeir         ###   ########.fr       */
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

int	ft_count_unsigned_digits(unsigned int n, int b)
{
	int	cont;

	cont = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / b;
		cont++;
	}
	return (cont);
}

void	ft_putunsigned_fd(unsigned int n, int fd)
{
	char	result;

	if (n > 9)
		ft_putunsigned_fd(n / 10, fd);
	result = n % 10 + '0';
	write(fd, &result, 1);
}

void	ft_puthex_fd(unsigned int n, int fd)
{
	char	result;
	char	*b;

	b = "0123456789abcdef";
	if (n > 15)
		ft_puthex_fd(n / 16, fd);
	result = b[n % 16];
	write(fd, &result, 1);
}

void	ft_puthex_upper_fd(unsigned int n, int fd)
{
	char	result;
	char	*b;

	b = "0123456789ABCDEF";
	if (n > 15)
		ft_puthex_upper_fd(n / 16, fd);
	result = b[n % 16];
	write(fd, &result, 1);
}
