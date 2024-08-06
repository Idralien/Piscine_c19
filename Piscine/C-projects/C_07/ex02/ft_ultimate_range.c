/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:17:05 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/22 15:13:53 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*memory;
	int	i;
	int	length;

	i = 0;
	length = max - min;
	memory = (int *)malloc(length * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (range == 0)
		return (-1);
	while (min < max)
	{
		memory[i] = min;
		min++;
		i++;
	}
	*range = memory;
	return (i);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	store;
	int	i;
	int	length;
	int	*range;

	i = 0;
	min = 1;
	max = 10;
	length = max - min;
	store = ft_ultimate_range(&range, min, max);
	if (range != NULL)
	{
		while (i < length)
		{
			printf ("%d, ", range[i]);
			i++;
		}
		free (range);
	}
	else
		printf ("Malloc failed!\n");
	return (0);
}*/
