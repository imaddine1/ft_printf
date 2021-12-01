/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:29:20 by iharile           #+#    #+#             */
/*   Updated: 2021/12/01 20:00:49 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<stdarg.h>
# include<unistd.h>

int		ft_putnbr(int n);
void	ft_putchar(char c);
int		ft_strlen(const char *s);
int		ft_printf(const char *format, ...);
int		ft_nbrlen(int n);
#endif