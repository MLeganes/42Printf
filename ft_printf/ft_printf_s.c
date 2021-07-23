/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 12:15:12 by x250              #+#    #+#             */
/*   Updated: 2021/07/22 21:20:15 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(const char *ch)
{
	int	count;

	count = 0;
	while (*(ch + count))
	{
		count++;
	}
	return (count);
}

int ft_printf_s(char *str)
{
    int ret;
  
    ret = 0;
    ret = ft_strlen(str);
    ret = write(1, str, ret);
    return(ret);
}
