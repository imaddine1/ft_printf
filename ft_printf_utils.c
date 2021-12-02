/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:49:39 by iharile           #+#    #+#             */
/*   Updated: 2021/12/02 20:30:02 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

static int	ft_nbrlen(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n /= 10;
		count ++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	long	nb;

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
	return (ft_nbrlen(n));
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

int	ft_unsigned_int(unsigned int nb)
{
	static int	count;

	if (nb > 9)
	{
		ft_unsigned_int(nb / 10);
	}
	ft_putchar((nb % 10) + 48);
	return (count);
}
