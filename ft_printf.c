/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:19:02 by iharile           #+#    #+#             */
/*   Updated: 2021/12/02 16:17:00 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_type(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count = ft_putnbr (va_arg(args, int));
	if (c == 'c')
		count = ft_putchar (va_arg(args, int));
	if (c == 's')
		count = ft_putstr (va_arg(args, char *));
	if (c == 'x')
		count = ft_hexa_lower(va_arg(args, int));
	if (c == 'X')
		count = ft_hexa_upper(va_arg(args, int));
	if (c == 'u')
		count = ft_unsigned_int(va_arg(args, int));
	if (c == 'p')
		count = ft_hex(va_arg(args, unsigned long long));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		j;
	int		count;

	j = 0;
	count = 0;
	va_start(args, format);
	while (format[j])
	{
		if (format[j] == '%' && (format [j + 1] == 'd' || format[j + 1] == 'c'
				|| format[j + 1] == 's' || format[j + 1] == 'p'
				|| format[j + 1] == 'i' || format[j + 1] == 'u' || format[j + 1]
				== 'x' || format[j + 1] == 'X' || format[j + 1] == '%'))
		{
			count += check_type(format[j + 1], args);
			j += 2;
		}
		else
		{	
			count += ft_putchar (format[j]);
			j++;
		}
	}
	return (count);
}
