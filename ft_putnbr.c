/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:16:30 by iharile           #+#    #+#             */
/*   Updated: 2021/12/01 14:27:15 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{	
		ft_putchar ('-');
		nb *= (-1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((char)(nb % 10) + 48);
}
