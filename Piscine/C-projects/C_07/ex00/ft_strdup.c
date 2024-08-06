/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:30:28 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/22 15:11:37 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*memory;
	int		length;

	length = ft_strlen(src);
	memory = (char *)malloc((length + 1) * sizeof(char));
	if (memory == 0)
		return (0);
	i = 0;
	while (i <= length)
	{
		memory[i] = src[i];
		i++;
	}
	return (memory);
}

/*int	main(void)
{
	char	original[] = "Ik Ben Brent";
	char	*memory = ft_strdup(original);

	if (memory != 0)
	{
		printf ("Original: %s\n", original);
		printf ("Memory: %s\n", memory);
		free (memory);
	}
	else
		printf ("Malloc failed!\n");
	return (0);
}*/
