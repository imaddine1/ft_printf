/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:11:45 by iharile           #+#    #+#             */
/*   Updated: 2021/12/02 11:02:56 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(void)
{
	char	x;
	int		a;
	char	*str;

	str = "-5peace to all of us";
	x = ' ';
	a = 100;
//	char p[100] = "imad %d harile";
	int i =	ft_printf ("imad %x", a);
	printf ("\n%d", i);
	// char *l = "%c imad %d";
	// int d = strlen (l);
	// int i =	ft_printf ("%c imad %d",x,a);
	// printf ("\n %d  %d",i,d);
	return (0);
}
