/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:55:14 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/06 14:28:33 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

/*int	main(void)
{
	int	x;
	int	y;
//	int	*div;
//	int	*mod;

	x = 7;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	if (y == 0)
	{
		printf ("Can't divide by 0");
	}
	else
	{
		printf ("%d\n", x);
		printf ("%d\n", y);
		return (0);
	}
}*/
