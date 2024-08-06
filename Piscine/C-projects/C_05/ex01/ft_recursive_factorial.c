/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:16:52 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/20 10:25:12 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*recursive telt als een eigen while loop, vermenigvuldigd het getal om 
daarna het getal -1 te doen en de volgende loop te doen. Tot het aan 1 komt*/

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}

/*
int	main(void)
{
	printf ("Factorial: %d\n", ft_recursive_factorial(5));
	return (0);
}
*/
