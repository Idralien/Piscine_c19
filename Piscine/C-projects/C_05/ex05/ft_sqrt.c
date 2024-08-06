/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:24:25 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/20 13:53:08 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Vierkantswortel 1 is 1 en 0 is 0.
als het 2 of groter is dan zoekt het door een while loop naar een
vermenigvuldiging tot dat de verminigvuldiging gelijk is aan de parameter
die meegegeven is*/

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	root = 2;
	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
		return (1);
	if (nb >= 2)
	{
		while (root * root <= nb)
		{
			if (root * root == nb)
			{
				return (root);
			}
			if (root > 46340)
				return (0);
			root++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf ("sqrt of %d is: %d\n", -284, ft_sqrt(-284));
	printf ("sqrt of %d is: %d\n", 0, ft_sqrt(0));
	printf ("sqrt of %d is: %d\n", 1, ft_sqrt(1));
	printf ("sqrt of %d is: %d\n", 2, ft_sqrt(2));
	printf ("sqrt of %d is: %d\n", 9, ft_sqrt(9));
	return (0);
}*/
