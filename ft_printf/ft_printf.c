/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 10:09:37 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/23 10:09:39 by amorcill         ###   ########.fr       */
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