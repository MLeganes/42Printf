/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 10:08:43 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/23 10:08:46 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/***
 * cspdiuxX%
 * 
 * 
 **/

int ft_printf_arg(va_list args, char fmt)
{
    if(fmt == 'c')
    {
        char c;
        c = (char)va_arg(args, int);
        
        ft_printf_c(c);
        
        return (1);
    }
    if (fmt == 's')
        return (ft_printf_s(va_arg(args, char *)));
    if (fmt == 'p')
        return (ft_printf_p((unsigned long)va_arg(args, void * )));
    if (fmt == 'd')
        return (ft_printf_d( va_arg(args, int)));
        
    // if (*fmt == 'i')
    //     ft_printf_i(args);
        
    // if (*fmt == 'u')
    //     ft_printf_u(args);
        
    // if (*fmt == 'x')
    //     ft_printf_x(args);
        
    // if (*fmt == 'X')
    //     ft_printf_X(args);
    // if (*fmt == '%')
    //     ft_printf_percent(args);
    return (0);
}