/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 10:09:16 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/23 21:37:58 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int	ft_unsignedlonglen(unsigned long n)
// {
// 	int		count;

// 	count = 0;
// 	while (n != 0)
// 	{
// 		n = n / 10;
// 		count++;
// 	}
// 	return (count);
// }

// static void	ft_putchar_fd(char c, int fd)
// {	
// 	write (fd, &c, 1);
// }


// static void	ft_putulnbr_fd(unsigned long n, int fd)
// {
// 	if (n == 0 || n == -0)
// 	{
// 		write(fd, "0x0", 3);
// 	}
// 	if (n == 18446744073709551615UL )
// 	{
// 		write(fd, "18446744073709551615", 20);
// 	}
// 	if (n > 18446744073709551614UL )
//         return ;
// 	if (n / 10)
//         ft_putulnbr_fd(n / 10, fd);
// 	ft_putchar_fd(n % 10 + '0', fd);
// }

static int	ft_tolower(int c)
{
	int	ret;

	ret = c;
	if (c > 64 && c < 91)
		ret += 32;
	return (ret);
}

static int	ft_dec_to_hex(unsigned long n, int lower, int reset)
{
	char			hex;
	static int		len;

	if (reset)
		len = 0;
		
	if (n / 16)
		ft_dec_to_hex((n / 16), lower, 0);
	if ((n % 16) > 9)
		hex = 'A' + ((n % 16) - 10);
	else
		hex = ((n % 16) + 48);
	if (lower == 1)
		hex = ft_tolower(hex);
	len += write(1, &hex, 1);
	return (len);
}

int ft_printf_p(unsigned long ptr)
{
  	if (!ptr)
		return (write(1, "0", 1));
    return (ft_dec_to_hex(ptr, 1, 1));
}
