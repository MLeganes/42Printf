/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 10:09:07 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/24 00:48:49 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_fd(char c, int fd)
{	
	write (fd, &c, 1);
}

static int	ft_intlen(int n)
{
	int		count;
	int		sign;

	sign = 1;
	if (n < 0)
	{
		sign = 0;
		n = n * -1;
	}
	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	if (sign == 0)
		count++;
	return (count);
}

static void	ft_putnbr_fd(int n, int fd)
{	
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

int	ft_printf_d(int d)
{
	if (d == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	ft_putnbr_fd(d, 1);
	return (ft_intlen(d));
}
