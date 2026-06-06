/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifiers2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 10:12:06 by edmedeir          #+#    #+#             */
/*   Updated: 2026/06/06 09:03:18 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	specifier_p(va_list *args)
{
	unsigned long	ptr;
	int				cont;

	ptr = va_arg(*args, unsigned long);
	if (ptr == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	else
	{
		ft_putstr_fd("0x", 1);
		cont = ft_count_ptr_digits(ptr) + 2;
		ft_putpointer_fd(ptr, 1);
	}
	return (cont);
}

int	specifier_lhex(va_list *args)
{
	int	cont;
	int	num;

	num = va_arg(*args, unsigned int);
	cont = ft_count_unsigned_digits(num, 16);
	ft_puthex_fd(num, 1);
	return (cont);
}

int	specifier_uhex(va_list *args)
{
	unsigned int	num;
	int				cont;

	num = va_arg(*args, unsigned int);
	cont = ft_count_unsigned_digits(num, 16);
	ft_puthex_upper_fd(num, 1);
	return (cont);
}
