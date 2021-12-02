/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:39:57 by iharile           #+#    #+#             */
/*   Updated: 2021/12/02 20:47:11 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbrlen_hex(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n /= 16;
		count ++;
	}
	return (count);
}

int	ft_hexa_lower(unsigned int nb)
{
	char			*str;
	unsigned int	n;

	n = nb;
	str = "0123456789abcdef";
	if (n > 15)
	{
		ft_hexa_lower(n / 16);
	}
	n %= 16;
	ft_putchar (str[nb]);
	return (ft_nbrlen_hex(nb));
}

int	ft_hexa_upper(unsigned int nb)
{
	char			*str;
	unsigned int	n;

	n = nb;
	str = "0123456789ABCDEF";
	if (n > 15)
	{
		ft_hexa_upper(n / 16);
	}
	n %= 16;
	ft_putchar (str[n]);
	return (ft_nbrlen_hex(nb));
}

int	ft_hex(unsigned long long nb)
{
	char				*str;
	unsigned long long	n;

	n = nb;
	str = "0123456789abcdef";
	if (n > 15)
	{
		ft_hex(n / 16);
	}
	else
		write (1, "0x", 2);
	n %= 16;
	ft_putchar (str[n]);
	return (ft_nbrlen_hex(nb) + 2);
}
