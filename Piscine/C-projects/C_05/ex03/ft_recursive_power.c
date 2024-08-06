/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:48:28 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/20 10:25:47 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power -1));
	}
	return (0);
}

/*int	main(void)
{
	printf ("%d\n", ft_recursive_power(4, 2));
	return (0);
}*/
