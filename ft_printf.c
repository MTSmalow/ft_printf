/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 06:09:30 by edmedeir          #+#    #+#             */
/*   Updated: 2026/06/05 08:45:46 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf(const char *format, ...)
{
	unsigned int	unum;
	va_list			args;
	int				i;
	char			charact;
	int				num;
	int				totch;
	char			*str;

	va_start(args, format);
	i = 0;
	totch = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			ft_putchar_fd(format[i], 1);
			totch++;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			charact = (char)va_arg(args, int);
			ft_putchar_fd(charact, 1);
			totch++;
			i++;
		}
		else if (format[i] == '%'
			&& (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			num = va_arg(args, int);
			totch += ft_count_digits(num);
			ft_putnbr_fd(num, 1);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			str = (char *)va_arg(args, char *);
			if (str)
			{
				totch = ft_strlen(str);
				ft_putstr_fd(str, 1);
			}
			else
			{
				ft_putstr_fd("(null)", 1);
				totch += 6;
			}
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'u')
		{
			unum = va_arg(args, unsigned int);
			totch += ft_count_unsigned_digits(unum);
			ft_putunsigned_fd(unum, 1);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			totch++;
		}
		i++;
	}
	va_end(args);
	return (totch);
}
