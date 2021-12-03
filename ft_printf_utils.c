/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:49:39 by iharile           #+#    #+#             */
/*   Updated: 2021/12/03 10:44:28 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

static int	ft_nbrlen(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= (-1);
		count ++;
	}
	while (n > 0)
	{
		n /= 10;
		count ++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	long		nb;
	const int	count = ft_nbrlen(n);

	nb = n;
	if (nb < 0)
	{	
		ft_putchar ('-');
		nb *= (-1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + 48);
	return (count);
}

int	ft_putstr(char *str)
{
	int	i;

	if (str == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_unsigned_int(unsigned int n)
{
	const int	count = ft_nbrlen(n);

	if (n > 9)
	{
		ft_unsigned_int(n / 10);
	}
	ft_putchar((n % 10) + 48);
	return (count);
}
