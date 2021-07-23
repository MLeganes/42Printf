/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 10:09:25 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/23 10:09:27 by amorcill         ###   ########.fr       */
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
