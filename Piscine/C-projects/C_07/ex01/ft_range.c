/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:27:53 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/22 15:12:22 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**/

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*memory;
	int	length;

	length = max - min;
	memory = (int *)malloc(length * sizeof(int));
	if (min >= max)
		return (NULL);
	i = 0;
	while (min < max)
	{
		memory[i] = min;
		min++;
		i++;
	}
	return (memory);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*store;
	int	i;
	int	length;

	i = 0;
	min = 0;
	max = 20;
	length = max - min;
	store = ft_range(min, max);
	if (store != NULL)
	{
		while (i < length)
		{
			printf ("%d, ", store[i]);
			i++;
		}
		free (store);
	}
	else
		printf ("Malloc failed!\n");
	return (0);
}*/
