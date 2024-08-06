/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:02:15 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/20 10:47:25 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index <= 1)
	{
		return (index);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

/*int	main(void)
{
	int	n;
	int	i;

	i = 0;
	n = 10;
	while (i <= n)
	{
		printf ("%d\n", ft_fibonacci(i));
		i++;
	}
	return (0);
}*/
