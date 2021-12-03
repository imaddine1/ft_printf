/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:39:57 by iharile           #+#    #+#             */
/*   Updated: 2021/12/03 17:46:45 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbrlen_hex(unsigned long n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n > 0)
	{
		n /= 16;
		count ++;
	}
	return (count);
}

int	ft_hexa_lower(unsigned int n)
{
	char		*str;
	const int	count = ft_nbrlen_hex(n);

	str = "0123456789abcdef";
	if (n > 15)
	{
		ft_hexa_lower(n / 16);
	}
	n %= 16;
	ft_putchar (str[n]);
	return (count);
}

int	ft_hexa_upper(unsigned int n)
{
	char		*str;
	const int	count = ft_nbrlen_hex(n);

	str = "0123456789ABCDEF";
	if (n > 15)
	{
		ft_hexa_upper(n / 16);
	}
	n %= 16;
	ft_putchar (str[n]);
	return (count);
}

int	ft_hex(unsigned long n)
{
	char			*str;
	const int		count = ft_nbrlen_hex(n);

	str = "0123456789abcdef";
	if (n > 15)
	{
		ft_hex(n / 16);
	}
	else
		write (1, "0x", 2);
	n %= 16;
	ft_putchar (str[n]);
	return (count + 2);
}
