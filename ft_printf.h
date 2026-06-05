/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 07:44:03 by edmedeir          #+#    #+#             */
/*   Updated: 2026/06/05 14:53:29 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "includes/libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int			ft_printf(const char *format, ...);
void		ft_putunsigned_fd(unsigned int n, int fd);
void		ft_putpointer_fd(unsigned long n, int fd);
void		ft_puthex_fd(unsigned int n, int fd);
void		ft_puthex_upper_fd(unsigned int n, int fd);
int			ft_count_digits(int n);
int			ft_count_unsigned_digits(unsigned int n, int b);
int			ft_count_ptr_digits(unsigned long n);
int			disc_specifier(char arg, va_list *args);
int			specifier_id(va_list *args);
int			specifier_c(va_list *args);
int			specifier_s(va_list *args);
int			specifier_u(va_list *args);
int			specifier_p(va_list *args);
int			specifier_lhex(va_list *args);
int			specifier_uhex(va_list *args);

#endif