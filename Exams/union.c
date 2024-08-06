/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:21:46 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/28 15:36:15 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_doubles2(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	check_doubles1(char *str, char c, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (str[i] == c)
			return (1);
		i++; 
	}
	return (0);
}

void	ft_union(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		if (check_doubles1(str1, str1[i], i) == 0)
			write(1, &str1[i], 1);
		i++;
	}
	i = 0;
	while (str2[i] != '\0')
	{
		if (check_doubles2(str1, str2[i]) == 0)
		{
			if (check_doubles1(str2, str2[i], i) == 0)
				write(1, &str2[i], 1);
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
