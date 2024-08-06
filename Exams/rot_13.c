/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsantsc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:38:07 by brsantsc          #+#    #+#             */
/*   Updated: 2024/02/27 11:47:36 by brsantsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'M')
			str[i] = str[i] + 13;
		else if (str[i] >= 'N' && str[i] <= 'Z')
			str[i] = str[i] - 13;
		else if (str[i] >= 'a' && str[i] <= 'm')
			str[i] = str[i] + 13;
		else if (str[i] >= 'n' && str[i] <= 'z')
			str[i] = str[i] - 13;
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
		rot_13(&argv[1][i]);
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
	return (0);
}
