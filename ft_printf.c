/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 06:09:30 by edmedeir          #+#    #+#             */
/*   Updated: 2026/06/06 09:21:37 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			totch;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	totch = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			totch++;
		}
		else
		{
			i++;
			totch += disc_specifier(format[i], &args);
		}
		i++;
	}
	va_end(args);
	return (totch);
}
