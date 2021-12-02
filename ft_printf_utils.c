/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:49:39 by iharile           #+#    #+#             */
/*   Updated: 2021/12/02 14:30:53 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putnbr(int n)
{
	long		nb;
	static int	count;

	nb = n;
	if (nb < 0)
	{	
		count += ft_putchar ('-');
		nb *= (-1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	count += ft_putchar((nb % 10) + 48);
	return (count);
}

int	ft_putstr(char *str)
{
	int	i;

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
	count += ft_putchar((nb % 10) + 48);
	return (count);
}
