/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:42:12 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/20 10:22:46 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Het resultaat van de vermenigvuldiging word in result gestoken, 
dan telt het af omdat het steeds moet vermenigvuldigen met het getal lager
tot het aan 1 komt in de loop*/

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (result);
}

/*int	main(void)
{
	printf ("%d\n", ft_iterative_factorial(5));
	return (0);
}*/
