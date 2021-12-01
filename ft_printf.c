/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:19:02 by iharile           #+#    #+#             */
/*   Updated: 2021/12/01 14:47:09 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_printf(const char *f, ...)
{
	va_list	args;
	int		j;
	int		count;
	char	*format;

	j = 0;
	format = f;
	va_start(args, format);
	while (format[j])
	{
		if (format[j] = '%' && format[j + 1] == 'd')
		{
			ft_putnbr (va_arg(args, int));
			count ++;
		}
		j++;
	}
	return (ft_strlen(format) - count);
}
