/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:11:45 by iharile           #+#    #+#             */
/*   Updated: 2021/12/03 10:42:27 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	char	x;
	void	*a;
	char	*str;
	int		i;

	str = "peace to all of us";
	
	x = 'a';
//	char p[100] = "imad %d harile";
	i =	ft_printf ("imad %d %d", INT_MIN, LONG_MIN);
	printf ("\n%d\n", i);
	i = printf ("imad %d %d", INT_MIN, LONG_MIN);
	printf ("\n%d", i);
//	printf ("imad %ld", LONG_MAX);
	// char *l = "%c imad %d";
	// int d = strlen (l);
	// int i =	ft_printf ("%c imad %d",x,a);
	// printf ("\n %d  %d",i,d);
	return (0);
}
