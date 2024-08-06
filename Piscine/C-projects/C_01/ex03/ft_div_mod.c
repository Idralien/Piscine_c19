/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:05:43 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/06 11:29:52 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int	x;
	int	y;
	int	a;
	int	b;

	a = 7;
	b = 0;
	ft_div_mod(a, b, &x, &y);
	if (b == 0)
	{
		printf ("Can't divide by 0\n");
	}
	else
	{
		printf ("%d\n", x);
		printf ("%d", y);
	}
	return (0);
}*/
