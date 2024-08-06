/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:25:57 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/27 17:32:18 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Y')
			str[i] = str[i] + 1;
		else if (str[i] >= 'a' && str[i] <= 'y')
			str[i] = str[i] + 1;
		else if (str[i] == 'Z' || str[i] == 'z')
			str[i] = str[i] - 25;
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		rotone(&argv[1][i]);
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
}
