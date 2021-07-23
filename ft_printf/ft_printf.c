/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:38:05 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/22 16:17:24 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *fmt, ...)
{
	int ret;
	va_list args;
	
    ret = 0;
	va_start(args, fmt);
	ret = ft_vsprintf((char *)fmt, args);
	va_end(args);
	return (ret);
}