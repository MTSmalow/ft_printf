/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifiers1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:36:27 by edmedeir          #+#    #+#             */
/*   Updated: 2026/06/06 08:57:24 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	disc_specifier(char arg, va_list *args)
{
	int	cont;

	cont = 0;
	if (arg == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	else if (arg == 'i' || arg == 'd')
		cont = specifier_id(args);
	else if (arg == 'c')
		cont = specifier_c(args);
	else if (arg == 's')
		cont = specifier_s(args);
	else if (arg == 'u')
		cont = specifier_u(args);
	else if (arg == 'p')
		cont = specifier_p(args);
	else if (arg == 'x')
		cont = specifier_lhex(args);
	else if (arg == 'X')
		cont = specifier_uhex(args);
	return (cont);
}

int	specifier_id(va_list *args)
{
	long	nbr;
	int		cont;

	nbr = (long)va_arg(*args, int);
	if (nbr < 0)
		cont = ft_count_digits_long(-nbr) + 1;
	else
		cont = ft_count_digits_long(nbr);
	ft_putnbr_fd((int)nbr, 1);
	return (cont);
}

int	specifier_c(va_list *args)
{
	char	charact;

	charact = (char)va_arg(*args, int);
	ft_putchar_fd(charact, 1);
	return (1);
}

int	specifier_s(va_list *args)
{
	char	*str;
	int		cont;

	str = va_arg(*args, char *);
	if (str)
	{
		cont = ft_strlen(str);
		ft_putstr_fd(str, 1);
	}
	else
	{
		ft_putstr_fd("(null)", 1);
		cont = 6;
	}
	return (cont);
}

int	specifier_u(va_list *args)
{
	unsigned int	unum;
	int				cont;

	unum = va_arg(*args, unsigned int);
	cont = ft_count_unsigned_digits(unum, 10);
	ft_putunsigned_fd(unum, 1);
	return (cont);
}
