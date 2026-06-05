/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 07:44:03 by edmedeir          #+#    #+#             */
/*   Updated: 2026/06/05 07:55:05 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "includes/libft/libft.h"
# include <stdarg.h>

void	ft_printf(const char *format, ...);
void	ft_putunsigned_fd(unsigned int n, int fd);
int		ft_count_digits(int n);
int		ft_count_unsigned_digits(unsigned int n);

#endif