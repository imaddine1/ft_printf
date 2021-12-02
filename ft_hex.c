/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:39:57 by iharile           #+#    #+#             */
/*   Updated: 2021/12/02 13:34:51 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_hexa_lower(unsigned int nb)
{
	char		*str;
	static int	count;

	str = "0123456789abcdef";
	if (nb > 15)
	{
		ft_hexa_lower(nb / 16);
	}
	nb %= 16;
	count += ft_putchar (str[nb]);
	return (count);
}

int	ft_hexa_upper(unsigned int nb)
{
	char		*str;
	static int	count;

	str = "0123456789ABCDEF";
	if (nb > 15)
	{
		ft_hexa_upper(nb / 16);
	}
	nb %= 16;
	count += ft_putchar (str[nb]);
	return (count);
}

int	ft_hex(void *n)
{
	char				*str;
	static int			count = 2;
	unsigned long long	nb;

	nb = (unsigned long long)n;
	str = "0123456789abcdef";

	return (count);
}
