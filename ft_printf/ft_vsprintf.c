/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 10:09:44 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/23 10:09:46 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_check_type(char c)
{
    if (c == 'c' || c == 'd' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == 's')
		return (1);
	return (0);
}

int ft_vsprintf(char *fmt, va_list args)
{
    int ret;
    int i;
    
    ret = 0;
    i = 0;
    while(fmt[i] != '\0')
    {
        if (fmt[i] != '%')
        {
            ret += write(1, &fmt[i], 1);
        }else
        {
            i++;
            if(ft_check_type(fmt[i]) && fmt[i + 1] != '%' )
            {
                ret += ft_printf_arg(args, fmt[i]);
                
            }else if(ft_check_type(fmt[i]) && fmt[i + 1] == '%')
            {
                // percent case
            }
        }
        i++;
    }
    return (ret);
}
