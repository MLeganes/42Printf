/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 10:09:25 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/24 00:57:50 by x250             ###   ########.fr       */
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

int	ft_printf_s(char *str)
{
	int	ret;

	if (!str)
		return (write(1, "(null)", 6));
	ret = 0;
	ret = ft_strlen(str);
	ret = write(1, str, ret);
	return (ret);
}
