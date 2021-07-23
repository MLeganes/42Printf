/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:13:27 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/22 21:42:11 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int	ft_printf(const char *, ...);
int ft_vsprintf(char *fmt, va_list args);

int ft_printf_arg(va_list args, char c);
int ft_printf_c(char c);
int ft_printf_s(char *str);
int ft_printf_p(unsigned long ptr);
int ft_printf_d(int d);

#endif