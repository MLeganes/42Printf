/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 12:34:57 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/24 09:40:54 by x250             ###   ########.fr       */
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

static int	ft_puthex(unsigned int n, int lower, int reset)
{
	char			hex;
	static int		len;

	if (reset)
		len = 0;
	if (n / 16)
		ft_puthex((n / 16), lower, 0);
	if ((n % 16) > 9)
		hex = 'A' + ((n % 16) - 10);
	else
		hex = ((n % 16) + 48);
	if (lower == 1)
		hex = ft_tolower(hex);
	len += write(1, &hex, 1);
	return (len);
}

int	ft_printf_hex(unsigned int u, int lower)
{
	if (u == 0)
		return (write(1, "0", 1));
	return (ft_puthex(u, lower, 1));
}
