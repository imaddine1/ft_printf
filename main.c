/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:11:45 by iharile           #+#    #+#             */
/*   Updated: 2021/12/02 17:23:36 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(void)
{
	char	*x;
	void	*a;
	char	*str;

	str = "peace to all of us";
	
	x = NULL;
//	char p[100] = "imad %d harile";
	int i =	ft_printf ("imad %s", x);
	printf ("\n%d", i);
//	printf ("\nimad %p", str);
	// char *l = "%c imad %d";
	// int d = strlen (l);
	// int i =	ft_printf ("%c imad %d",x,a);
	// printf ("\n %d  %d",i,d);
	return (0);
}
