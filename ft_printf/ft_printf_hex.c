/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 12:34:57 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/23 21:12:51 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_tolower(int c)
{
	int	ret;

	ret = c;
	if (c > 64 && c < 91)
		ret += 32;
	return (ret);
}

static int	ft_dec_to_hex(unsigned int n, int lower, int reset)
{
	char			r;
	static int		len;

	if (reset)
		len = 0;
		
	if (n / 16)
		ft_dec_to_hex((n / 16), lower, 0);
	if ((n % 16) > 9)
		r = 'A' + ((n % 16) - 10);
	else
		r = ((n % 16) + 48);
	if (lower == 1)
		r = ft_tolower(r);
	len += write(1, &r, 1);
	return (len);
}

int ft_printf_hex(unsigned int u, int lower)
{
	static int len;

	len = 0;
	if (u == 0)	
		return (write(1, "0", 1));		
	return ( ft_dec_to_hex(u, lower, 1));
}
