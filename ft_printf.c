/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 06:09:30 by edmedeir          #+#    #+#             */
/*   Updated: 2026/06/05 09:39:33 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			totch;

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
			totch += specifier(format[i], &args);
		}
		i++;
	}
	va_end(args);
	return (totch);
}
