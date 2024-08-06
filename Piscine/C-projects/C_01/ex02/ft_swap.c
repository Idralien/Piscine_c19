/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:50:44 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/06 11:02:27 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int	main(void)
{
	int	c;
	int	d;

	c = 24;
	d = 30;
	ft_swap(&c, &d);
	printf ("%d\n", c);
	printf ("%d", d);
	return (0);
}*/
