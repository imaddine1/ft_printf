/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:29:20 by iharile           #+#    #+#             */
/*   Updated: 2021/12/03 17:46:57 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<string.h>
# include<stdarg.h>
# include<unistd.h>

int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_printf(const char *format, ...);
int	ft_putstr(char *str);
int	ft_hexa_lower(unsigned int n);
int	ft_hexa_upper(unsigned int n);
int	ft_unsigned_int(unsigned int n);
int	ft_hex(unsigned long n);
#endif