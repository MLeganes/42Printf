/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 10:08:25 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/23 18:32:24 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int	ft_printf(const char *, ...);

int ft_printf_arg(va_list args, char c);
int ft_printf_s(char *str);
int ft_printf_p(unsigned long ptr);
int ft_printf_d(int d);
int ft_printf_hex(unsigned int u, int lower);
int ft_printf_u(unsigned int ui);

#endif