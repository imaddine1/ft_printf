/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:11:45 by iharile           #+#    #+#             */
/*   Updated: 2021/12/01 14:34:41 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(void)
{
	char	x;
	int		a;

	x = 'a';
	a = 9;
//	char p[100] = "imad %c harile";
//	ft_printf ("imad harile his %d note %c is",x,a);
	char *l = "%c imad %d";
	int d = strlen (l);
	int i =	printf ("%c imad %d",x,a);
	printf ("\n %d  %d",i,d);
	return (0);
}
