/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 12:34:57 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/23 15:45:24 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_dec_to_hex(unsigned long long n, int lower, int reset)
{
	unsigned long long	o;
	char				r;
	static int			length = 0;

	o = 0;
	if (reset)
		length = 0;
	if (n == 0)
		return (length);
	o = n % 16;
	ft_dec_to_hex((n / 16), lower, 0);
	if (o > 9)
		r = 'A' + (o - 10);
	else
		r = (o + 48);
	if (lower == 0)
		r = ft_tolower(r);
	length++;
	write(1, &r, 1);
	return (length);
}

int ft_printf_hex(unsigned int u, int lower)
{
	int ret;

	ret = 0;
	
		
	
	return (ret);	
}
