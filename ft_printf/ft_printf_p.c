/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:06:56 by x250              #+#    #+#             */
/*   Updated: 2021/07/23 08:53:33 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unsignedlonglen(unsigned long n)
{
	int		count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_putchar_fd(char c, int fd)
{	
	write (fd, &c, 1);
}


static void	ft_putulnbr_fd(unsigned long n, int fd)
{
	if (n == 0 || n == -0)
	{
		write(fd, "0", 1);
	}
	if (n == 18446744073709551615UL )
	{
		write(fd, "18446744073709551615", 20);
	}
	if (n > 18446744073709551614UL || n < -1)
        return ;
	if (n / 10)
        ft_putulnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

int ft_printf_p(unsigned long ptr)
{
    int ret;
  
    ret = 0;
    ft_putulnbr_fd(ptr, 1);
    ret = ft_unsignedlonglen(ptr);
    return (ret);
}
