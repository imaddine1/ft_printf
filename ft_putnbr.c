/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:16:30 by iharile           #+#    #+#             */
/*   Updated: 2021/12/01 15:30:32 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		count;

	count = 0;
	nb = n;
	if (nb < 0)
	{	
		ft_putchar ('-');
		nb *= (-1);
		count ++;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		count ++;
	}
	ft_putchar((char)(nb % 10) + 48);
	return (count);
}
