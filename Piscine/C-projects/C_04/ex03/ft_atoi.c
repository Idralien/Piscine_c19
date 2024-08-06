/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:45:28 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/12 14:33:23 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	pos_neg;
	int	outcome;

	i = 0;
	pos_neg = 1;
	outcome = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			pos_neg *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		outcome = outcome * 10 + str[i] - '0';
		i++;
	}
	return (outcome * pos_neg);
}

/*int	main(void)
{
	char	test[] = "  ---+--+1234ab567";
	char	test2[] = " --+ -0abc2";
	printf ("%d\n", ft_atoi(test));
	printf ("%d\n", ft_atoi(test2));
	printf ("%d", atoi(test));
	return (0);
}*/
