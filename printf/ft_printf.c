/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:38:05 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/20 18:20:11 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int 


int ft_printf(const char *fmt, ...)
{
	int ret;
	va_list ap;
	
	va_start(ap, fmt);
	ret = vfprintf(strdout, locale, fm, ap);
	va_end(ap);
	return (ret);
}