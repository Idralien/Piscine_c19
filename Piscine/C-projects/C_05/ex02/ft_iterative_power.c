/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:25:59 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/20 12:58:54 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*result is 1 omdat de vermenigvuldiging van nb 
daarna in result gestoken word. 
waarna het nieuwe result nog eens 
vermenigvuldigd met nb. 
bijvoorbeeld 1x4= 4 daarna is result 4 en 
omdat het power 2 is doet het nog een keer 4x4 voor 16*/

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0 || nb == 0)
		return (1);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	printf ("%d\n", ft_iterative_power(-8, 7));
	return (0);
}*/
